/*
 * TopCoder
 * Single Round Match: 170
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1930
 */

#include <iostream>
#include <vector>

using namespace std;

class LevelUp {
public:
    int toNextLevel(vector<int> expNeeded, int received) {
        int experienceNeeded = 0;
        for(int i = 0; i < expNeeded.size() ; ++i){
            if (expNeeded[i] > received){
                experienceNeeded = expNeeded[i] - received;
                break;
            }
        }
        return experienceNeeded;
    }
};
