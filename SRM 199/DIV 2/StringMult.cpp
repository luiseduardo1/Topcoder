/*
 * TopCoder
 * Single Round Match: 199
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1046
 */

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

class StringMult {
public:
    string times(string sFactor, int iFactor) {
        
        if (sFactor == ""){
            return "";
        } else if (iFactor == 0){
            return "";
        } else if (iFactor > 0){
          return multiplyString(sFactor,iFactor);
        } else {
            reverse(sFactor.begin(), sFactor.end());
            return multiplyString(sFactor, (iFactor * -1));
        }
    }
    
    string multiplyString(const string& s, int n){
        stringstream out;
        while (n--){
            out << s;
        }
        return out.str();
    }

};

