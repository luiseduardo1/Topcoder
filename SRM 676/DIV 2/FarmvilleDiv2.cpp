/*
 * TopCoder
 * Single Round Match: 676
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=14047
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
class FarmvilleDiv2{
public:
    int minTime(vector <int> time, vector <int> cost, int budget){
        int result = 0;
        vector<pair<int,int>> pair;
        
        for(int i = 0 ; i < time.size() ; ++i){
            pair.push_back(make_pair(cost[i], time[i]));
        }
        sort(pair.begin(), pair.end());
        
        for (int j = 0; j < pair.size(); ++j){
            int nb = budget / pair[j].first;
            int reduceTime = min(pair[j].second, nb );
            pair[j].second -= reduceTime;
            budget -= reduceTime * pair[j].first;
        }
        
        for (int k = 0 ; k < pair.size() ; ++k){
            result += pair[k].second;
        }
        
        return result;
    }

};
int main()
{
    FarmvilleDiv2 testClass;
    vector<int> time = {100};
    vector<int> cost = {1};
    int budget = 101;
    cout << testClass.minTime(time, cost, budget)<< endl;
}