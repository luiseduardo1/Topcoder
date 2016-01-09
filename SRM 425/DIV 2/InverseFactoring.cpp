/*
 * TopCoder
 * Single Round Match: 425
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=10118
 */

#include <algorithm>
#include <vector>

using namespace std;

class InverseFactoring{
public:
    int getTheNumber(vector <int> factors){
        sort(factors.begin(),factors.end());
        return factors.front() * factors.back();
    }
};
