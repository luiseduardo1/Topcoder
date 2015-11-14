/*
 * TopCoder
 * Single Round Match: 156
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1777
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class DiskSpace{
    
public:
    int minDrives(vector <int> used, vector <int> total){
        sort(total.rbegin(), total.rend());
        int totalUsedData =0;
        int usedDrives = 0;
        for(auto i: used){
            totalUsedData += i;
        }
        for (int i = 0; i < total.size(); ++i) {
            if (total[i] < totalUsedData){
                totalUsedData -= total[i];
                ++usedDrives;
                cout << usedDrives << endl;
            } else {
                ++usedDrives;
                break;
            }
        }
        return usedDrives;
    };
};


int main(){
    vector<int> used = {331,242,384,366,428,114,145,89,381,170,329,190,482,246,2,38,220,290,402,385};
    vector<int> total = {992,509,997,946,976,873,771,565,693,714,755,878,897,789,969,727,765,521,961,906};
    DiskSpace diskSpaceTest;
    cout << diskSpaceTest.minDrives(used, total) << endl;
    
}