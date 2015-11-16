/*
 * TopCoder
 * Single Round Match: 157
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1790
 */

#include <iostream>

using namespace std;

class GuessTheNumber {
public:
    int noGuesses(int upper, int answer){
        int nbGuesses = 0;
        int lowerBound = 1;
        int guess = 0;
        
        while (guess != answer){
            nbGuesses += 1;
            guess = (lowerBound + upper) / 2;
            if (guess < answer){
                lowerBound = guess + 1;
            } else {
                upper = guess - 1;
            }
        }
        return nbGuesses;
    }
};

int main(){
    GuessTheNumber Game;
    cout << Game.noGuesses(9, 3) << endl;
}