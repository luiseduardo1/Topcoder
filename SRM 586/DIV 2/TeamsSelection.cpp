/*
 * TopCoder
 * Single Round Match: 586 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=12696
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_set>

using namespace std;

class TeamsSelection{
public:
    string simulate(vector <int> preference1, vector <int> preference2){
        vector<int> result;
        for (int i = 0; i < preference1.size(); ++i) {
                result.push_back(preference1[i]);
                result.push_back(preference2[i]);
        }

        unordered_set<int> s(result.begin(), result.end());
        result.assign(s.begin(), s.end());
        reverse(result.begin(), result.end());
        
        string str(result.size(), ' ');
        for (int j = 0; j< result.size(); ++j) {
            int i = result[j];
            if (j % 2 == 0) {
                str[i-1] = '1';
            }else {
                str[i-1] = '2';
            }
        }
        
        return str;
    }
};

int main(){
    TeamsSelection classTest;
    vector<int> a = {3,2,1};
    vector<int> b = {1, 3, 2};
    cout << classTest.simulate(a, b);
}
