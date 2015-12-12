/*
 * TopCoder
 * Single Round Match: 573
 * Division: 1
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=12469
 */
 
#include <vector>

using namespace std;

class SkiResortsEasy {
    public:
    int minCost(vector<int> altitude) {
        int max = altitude[0];
        int cost = 0;
        for(int i = 1 ; i < altitude.size() ; ++i){
            if (altitude[i] > max) {
                cost += altitude[i] - max;
                altitude[i] = max;
                max = altitude[i];
            }
            max = altitude[i];
        }
        return cost;
    }
};


