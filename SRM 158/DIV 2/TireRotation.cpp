/*
 * TopCoder
 * Single Round Match: 158
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1791
 */

#include <iostream>
#include <string>

using namespace std;

class TireRotation {
public:
    int getCycle(string initial, string current){
        if (initial == current){
            return 1;
        }
        else if (initial.at(0) == current.at(2) ||
                 initial.at(1) == current.at(3) ||
                 initial.at(2) == current.at(1) ||
                 initial.at(3) == current.at(0)){
            return 2;
        }
        else if (initial.at(0) == current.at(1) ||
                 initial.at(1) == current.at(0) ||
                 initial.at(2) == current.at(3) ||
                 initial.at(3) == current.at(2)){
            return 3;
        }
        else if (initial.at(0) == current.at(3) ||
                 initial.at(1) == current.at(2) ||
                 initial.at(2) == current.at(0) ||
                 initial.at(3) == current.at(1)){
            return 4;
        }
        else{
            return -1;
        }
    }
};

int main(){
    TireRotation tireRotationTest;
    cout << tireRotationTest.getCycle("ABCD", "CDBA") << endl;
}