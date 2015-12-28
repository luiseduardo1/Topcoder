/*
 * TopCoder
 * Single Round Match: 677
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=14098&rd=16627
 */

#include <string>

using namespace std;

class PalindromePrime{
    
public:
    int count(int L, int R){
        int counter = 0;
        for (int i = L; i <= R; i++) {
            if ( isPalindrome(i) && isPrime(i) ) {
                counter++;
            }
        }
        return counter;
    }
    
private:
    
    bool isPalindrome(int number){
        string s = to_string(number);
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    bool isPrime(int number){
        if (number == 1) {
            return false;
        }
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};