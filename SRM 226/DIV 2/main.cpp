/*
 * TopCoder
 * Single Round Match: 226
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=3489
 */

#include <iostream>
#include <string>

using namespace std;

class VLNString {
public:
    string makeAcronym(string longName){
        string result = "";
        string word = "";
        
        for (int i = 0; i < longName.length(); ++i) {
            if (longName[i] != ' ' && i != (longName.length() -1)) {
                word += longName[i];
            } else if(longName[i] == ' ' || i == (longName.length() -1)){
                if (wordIsNotValid(word) || word.empty()){
                    word.clear();
                } else {
                    result += toupper(word[0]);
                    word.clear();
                }
            }
        }
        return result;
    }
    
private:
    bool wordIsNotValid(string word){
        bool value = false;
        if (word.compare("and") == 0 ||
            word.compare("of") == 0 ||
            word.compare("the") == 0 ){
            value = true;
        }
        return value;
    }
};
