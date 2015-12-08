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
