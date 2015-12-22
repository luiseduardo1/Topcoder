/*
 * TopCoder
 * Single Round Match: 675
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/tc?module=ProblemDetail&rd=16625&pm=14090
 */

#include <iostream>
#include <string>

using namespace std;

class LengthUnitCalculator{
    
public:
    double calc(int amountInt, string fromUnit, string toUnit){
        long double result = amountInt;
        result = convertToIn(fromUnit, result);
        result = convertToUnit(toUnit, result);
        return result;
    }
    
private:
    
    long double convertToIn(string fromUnit, double amount){
        if (fromUnit =="ft"){
            return amount * 12;
        } else if (fromUnit == "yd"){
            return amount * 36;
        } else if (fromUnit == "mi"){
            return amount * 63360;
        } else {
            return amount;
        }
    }
    
    long double convertToUnit(string toUnit, double amount){
        if (toUnit =="ft"){
            return amount / 12;
        } else if (toUnit == "yd"){
            return amount / 36;
        } else if (toUnit == "mi"){
            return amount / 63360;
        } else {
            return amount;
        }
    }
    
};