/*
 * TopCoder
 * Single Round Match: 671
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=13488
 */

#include <iostream>
#include <algorithm>

using namespace std;

class BearPaints{
public:
    long long maxArea(int W, int H, long long M){
        long result = 0;
        
        for (long w = 1 ; w <= W; w++) {
            long bestH = min<long>(H, M/w); //We pass template argument explicitly
            result = max(result, w * bestH);
        }
        return result;
    }
};
