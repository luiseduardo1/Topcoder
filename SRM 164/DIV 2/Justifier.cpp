#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Justifier {
    
public:
    vector <string> justify(vector <string> textIn){
        vector <string> result;
        size_t max = longestStringLength(textIn);
        
        for (auto word : textIn) {
            string spaceToAdd = string(max - word.length(), (' '));
            word = spaceToAdd + word;
            result.push_back(word);
        }
        return result;
    }
    
private:
    
    static size_t longestStringLength(vector<string> stringsVector){
        size_t max = 0;
        for (const auto& string : stringsVector){
            if (string.length() > max) {
                max = string.length();
            }
        }
        return max;
    }
};
