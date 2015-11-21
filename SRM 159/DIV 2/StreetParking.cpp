/*
 * TopCoder
 * Single Round Match: 159
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1753
 */

#include <iostream>
#include <string>

using namespace std;

class StreetParking {
public:
    int freeParks(string street){
        int nbOfPossibleParkings = 0;
        
        for (int i = 0; i < street.size(); ++i) {
            if (isPossibleparking(street, i)){
                ++nbOfPossibleParkings;
            }
        }
        return nbOfPossibleParkings;
        }
private :
    bool isPossibleparking(string str, int index){
        if (str.at(index) == 'S' || str.at(index) == 'B'|| str.at(index) =='D'){
            return false;
        } else if ((index > 0) && (str.at(index - 1) == 'S') ){
            return false;
        } else if ((index + 1 < str.size()) && ((str.at(index + 1) == 'B')||(str.at(index + 1) == 'S'))){
            return false;
        } else if ((index + 2 < str.size()) && (str.at(index + 2) == 'B')){
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    StreetParking stParkingTest;
    string stTest = "SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D";
    cout << stParkingTest.freeParks(stTest) << endl;
    
}
