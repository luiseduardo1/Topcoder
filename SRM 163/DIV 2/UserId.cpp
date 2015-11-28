#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <regex>
#include <string>

using namespace std;

class UserId {
public:
    string id(vector<string> inUse, string first, string middle, string last) {
        
        string userId = "";
        
        if ((isValid(first)|| isValid(middle)|| isValid(last)) == false){
            return "BAD DATA";
        }
        if (first.length() < 2 || last.length() < 2){
            return "BAD DATA";
        }
        
        transform(first.begin(), first.end(), first.begin(), ::tolower);
        transform(middle.begin(), middle.end(), middle.begin(), ::tolower);
        transform(last.begin(), last.end(), last.begin(), ::tolower);

        first = removeSpaces(first);
        first = removeApostrophes(first);
        middle= removeSpaces(middle);
        middle = removeApostrophes(middle);
        last = removeSpaces(last);
        last = removeApostrophes(last);
        
        string idAlgo1 = (first.substr(0,1) + last).substr(0,8);
        if(std::find(inUse.begin(), inUse.end(), idAlgo1) != inUse.end()){
            if(middle != ""){
                string idAlgo2 = (first.substr(0,1)+middle.substr(0,1)+last).substr(0,8);
                if(!(find(inUse.begin(), inUse.end(), idAlgo2) != inUse.end())){
                    id = idAlgo2;
                }
            } else {
                for(int i = 1 ; i < 98 ; ++i){
                    string digit ="";
                    if(i < 9){
                        digit = '0'+ to_string(i);
                    } else {
                        digit = to_string(i);
                    }
                    string idAlgo3 = (((first.substr(0,1) + last).substr(0,6)) + digit);
                    if(!(find(inUse.begin(), inUse.end(), idAlgo3) != inUse.end())){
                        id = idAlgo3;
                        break;
                    }
                }
            }
            
        } else {
            id = idAlgo1;
        }
        
        return id;
};
    
private:
    bool isValid(string word){
       return regex_match(word,regex("^[A-Za-z ']+$"));
    }
                         
    string removeSpaces(string input){
       input.erase(std::remove(input.begin(), input.end(),' '), input.end());
       return input;
    }
                         
    string removeApostrophes(string input){
       input.erase(std::remove(input.begin(), input.end(),'\''), input.end());
       return input;
    }
                         
};

