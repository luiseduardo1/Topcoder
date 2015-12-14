/*
 * TopCoder
 * Single Round Match: 167
 * Division: 2
 * Level:1
 * Points: 300
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1750&rd=4640
 */

using namespace std;

class EyeDrops {
public:
    double closest(int sleepTime, int k) {
        double result = (24.0 * 60) / k;
        if (result >= sleepTime * 60){
            return result;
        } else {
            return (24.0 - sleepTime) / (k -1) * 60;
        }
    }
};


