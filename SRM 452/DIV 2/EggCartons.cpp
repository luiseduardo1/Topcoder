/*
 * TopCoder
 * Single Round Match: 452 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=10582
 */

#include <iostream>
#include <algorithm>

using namespace std;

class EggCartons {
public:
    int minCartons(int n){
        int ret = -1;
        
        if (n % 2 != 0) return ret;
        if ((n % 6 == 0) || (n % 8 == 0)) return min(n/6, n/8);
        
        for (int i = 1; i < n/8; ++i){
            int rest =  n - i*8;
            for(int j = 1; j <= rest/6 ; ++j){
                if ((i*8 + j*6) == n){
                    if (ret == -1) ret = i+j;
                    ret = min(i+j, ret);
                }
            }
        }
        return ret;
    }
};

