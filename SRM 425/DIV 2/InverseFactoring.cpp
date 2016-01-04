#include <algorithm>
#include <vector>

using namespace std;

class InverseFactoring{
public:
    int getTheNumber(vector <int> factors){
        sort(factors.begin(),factors.end());
        return factors.front() * factors.back();
    }
};