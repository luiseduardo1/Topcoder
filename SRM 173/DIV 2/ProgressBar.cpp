/*
 * TopCoder
 * Single Round Match: 173
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1975
 */

#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class ProgressBar {
public:
    string showProgress(vector<int> taskTimes, int tasksCompleted) {
        string progressBar;
        int completed = accumulate(taskTimes.begin(), taskTimes.begin() + tasksCompleted, 0);
        int total = accumulate(taskTimes.begin(), taskTimes.end(), 0);
        float result = floor(20 * ((float)completed / (float)total));
        
        for (int i = 0 ; i < 20 ; ++i){
            if (i < result){
                progressBar += "#";
            } else if (i >= result) {
                progressBar += ".";
            }
        }
        return progressBar;
    }
};
