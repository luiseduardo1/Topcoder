/*
 * TopCoder
 * Single Round Match: 158
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1791
 */

#include <iostream>

using namespace std;

// Other version of the class
class TireRotation {
public:
    int getCycle(string initial, string current){
        string firstCycle  = initial;
        string secondCycle = next(firstCycle);
        string thirdCycle  = next(secondCycle);
        string fourthCycle = next(thirdCycle);
        
        if (current == firstCycle){
            return 1;
        }
        else if (current == secondCycle){
            return 2;
        }
        else if (current == thirdCycle) {
            return 3;
        }
        else if (current == fourthCycle) {
            return 4;
        }
        else {
            return -1;
        }
    }
private:
    string next(string str){
        string result = "";
        result += str[3];
        result += str[2];
        result += str[0];
        result += str[1];
        
        return result;
        }
};

// First version of the class
/*
class TireRotation {
public:
    int getCycle(string initial, string current){
        if (initial == current){
            return 1;
        }
        else if (initial[0] == current[2] ||
                 initial[1] == current[3] ||
                 initial[2] == current[1] ||
                 initial[3] == current[0]){
            return 2;
        }
        else if (initial[0] == current[1] ||
                 initial[1] == current[0] ||
                 initial[2] == current[3] ||
                 initial[3] == current[2]){
            return 3;
        }
        else if (initial[0] == current[3] ||
                 initial[1] == current[2] ||
                 initial[2] == current[0] ||
                 initial[3] == current[1]){
            return 4;
        }
        else{
            return -1;
        }
    }
};
*/

int main(){
    TireRotation tireRotationTest;
    cout << tireRotationTest.getCycle("ABCD", "CDBA") << endl;
}