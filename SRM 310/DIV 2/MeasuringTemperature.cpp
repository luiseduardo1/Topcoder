#include <iostream>
#include <vector>

using namespace std;

class MeasuringTemperature {
public:
    double averageTemperature(vector<int> measuredValues) {
        double result = -300.;
        int count = 0;
        double keepedValues = 0.0;
        
        for (int i =0 ; i < measuredValues.size() ; ++i) {
            if (measuredValues[i] > -273){
                if ((i > 0 && abs(measuredValues[i -1] - measuredValues[i]) <= 2 )||
                    (i > 1 && abs(measuredValues[i -2] - measuredValues[i]) <= 2) ||
                    (i < measuredValues.size()-1 && abs(measuredValues[i+1] - measuredValues[i]) <= 2) ||
                     (i < measuredValues.size()-2 && abs(measuredValues[i+2] - measuredValues[i]) <= 2)){
                         keepedValues += measuredValues[i];
                         ++count;
                }
            }
        }
        
        if (count != 0){
            result = keepedValues / count;
        }
        return result;
    }
};

int main(){
    MeasuringTemperature classTest;
    vector<int> testVector = {10, 20, 30, 40};
    cout << classTest.averageTemperature(testVector) << endl;
}