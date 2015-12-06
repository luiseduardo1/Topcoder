/*
 * TopCoder
 * Single Round Match: 235
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=4019
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class NoisySensor {
public:
    vector<int> medianFilter(vector<int> data) {
        vector<int> result;
        
        result.push_back(data[0]);
        if (data.size() > 2){
            for (int i = 1; i< data.size() - 1; ++i){
                result.push_back(median(data[i -1], data[i], data[i + 1]));
            }
        }
        result.push_back(data[data.size()-1]);
        
        return result;
        
    }
    
private:
    int median(int a, int b, int c){
        if (a > b){
            swap(a, b);
        }
        if (b > c){
            swap(b, c);
        }
        if (a > b){
            swap(a, b);
        }
        return b;
    }
};