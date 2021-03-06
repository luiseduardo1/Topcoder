/*
 * TopCoder
 * Single Round Match: 576
 * Division: 2
 * Level:1
 * Points: 256
 * Description: https://community.topcoder.com/tc?module=ProblemDetail&rd=15496&pm=12508
 */

#include <iostream>
#include <vector>

using namespace std;

class TheExperimentDiv2{
    
public:
    vector <int> determineHumidity(vector <int> intensity, int L, vector <int> leftEnd)
    {
        vector<int> result(leftEnd.size());
        
        for (int i = 0; i < intensity.size(); ++i) {

            for (int j = 0; j < leftEnd.size(); ++j) {
                if ( leftEnd[j] <= i && i < leftEnd[j] + L) {
                    result[j] += intensity[i];
                    break;
                }
            }
        }
        return result;
    }
};
