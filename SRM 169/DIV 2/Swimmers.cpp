/*
 * TopCoder
 * Single Round Match: 169
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1754
 */

#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class Swimmers {
public:
    vector<int> getSwimTimes(vector<int> distances, vector<int> speeds, int current){
        vector<int> result;
        
        for (int i = 0; i < speeds.size(); ++i) {
            if (distances[i] == 0) {
                result.push_back(0);
            } else if (speeds[i] > current) {
                float timeTaken = ((float) distances[i] / (speeds[i] + current));
                timeTaken +=  (float) distances[i] / (speeds[i] - current);
                result.push_back(floor(timeTaken));
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }

};


