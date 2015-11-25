/*
 * TopCoder
 * Single Round Match: 162
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1792
 */

#include <iostream>

using namespace std;

class LCMRange {
    
public:
    // You need to know the greatest common divisor (GCM) algorithm, then
    //       you use this formula to find the least common multiple (LCM):
    //                        LCM(a,b) = a*b / GCD(a,b)
    //
    
    int lcm(int first, int last){
        int result = first;
        for (int i = first; i <= last; ++i) {
            result = (result * i)/ GCD(result,i);
        }
        return result;
    }
private:
    // Euclidean algorithm to find GCD
    int GCD(int a, int b){
        return (b == 0 ? a : GCD(b, a%b));
    }
};

int main() {
    LCMRange lcmRangeTest;
    cout << lcmRangeTest.lcm(1, 5)<< endl;
}
