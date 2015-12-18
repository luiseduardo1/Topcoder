/*
 * TopCoder
 * Single Round Match: 171
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1944
 */

#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class RPG {
public:
    vector<int> dieRolls(vector<string> dice) {
        int minValue = 0;
        int maxValue = 0;
        
        for (int i = 0; i < dice.size() ; ++i){
            int nbDices = getNbDices(dice[i]);
            int nbFaces = getNbFaces(dice[i]);
            minValue += nbDices * 1;
            maxValue += nbDices * nbFaces;
        }
        
        int moyValue = floor((float)((minValue + maxValue) / 2));
        vector<int> result = {minValue, maxValue, moyValue};
        return result;
    }
    
private:
    int getNbDices(string dice){
        return stoi(dice.substr(0, 'd'));
    }
    
    int getNbFaces(string dice){
        cout <<dice.find("d") + 1 << endl;
        return stoi(dice.substr(dice.find("d") + 1));
    }
};

int main(){
    RPG testClass;
    vector<string> test = 	{ "6d5", "10d10", "10d20" };
    vector<int> result;
    result = testClass.dieRolls(test);
    for (auto &it: result) {
        cout<< it << " ";
    }
}
