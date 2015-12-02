/*
 * TopCoder
 * Single Round Match: SRM 168
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1937
 */

#include <vector>
#include <iostream>

using namespace std;

class StairClimb {
public:
    int stridesTaken(vector <int> flights, int stairsPerStride){
        int result = 0;
        for(int i = 0; i < flights.size(); ++i){
            int missingStairs = flights[i] % stairsPerStride;
            int stridesTakenPerFlight = flights[i] / stairsPerStride;
            result += (i != flights.size() - 1)  ? stridesTakenPerFlight + missingStairs + 2 : stridesTakenPerFlight + missingStairs;
        }
        return result;
    }
};

int main(){
    StairClimb stairClimbTest;
    vector<int> flightsTest = {15,15};
    int stairsPerStrideTest = 2;
    cout << stairClimbTest.stridesTaken(flightsTest, stairsPerStrideTest) << endl;
}