/*
 * TopCoder
 * Single Round Match: 160
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1333
 */

#include <iostream>
#include <string>

using namespace std;

class Substitute {
public:
    int getValue(string key, string code){
        int result = 0;

        for (int i = 0; i < code.length(); ++i) {
            size_t keyPosition = key.find(code[i]);
            if (keyPosition != string::npos) {
                if(keyPosition == key.length()-1){
                    result *= 10;
                } else {
                    result *= 10;
                    result += keyPosition + 1;
                }
            }
        }
        return result;
    }
};

int main() {
    Substitute substituteTest;
    string keyTest = "TRADINGFEW";
    string codeTest = "LGXWEV";
    cout << substituteTest.getValue(keyTest, codeTest)<< endl;
}

