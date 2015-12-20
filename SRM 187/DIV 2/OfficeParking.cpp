#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class OfficeParking {
    
public:
    int spacesUsed(vector <string> events){
        int result = 0;
        int temp = 0;
        
        for(int i = 0; i < events.size() ; ++i){
            if (events[i].find("arrives") != string::npos) {
                ++temp;
                result = max(result, temp);
            } else{
                --temp;
            }
        }
        return result;
    }
};