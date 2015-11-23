/*
 * TopCoder
 * Single Round Match: 161
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1800
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CardCount {
public:
    vector <string> dealHands(int numPlayers, string deck) {
        vector<string> result(numPlayers);
        int cardGiven = 0;
        for(int i = 0; i < deck.size()/numPlayers; ++i)
        {
            for(int j = 0; j < numPlayers; ++j)
            {
                result[j] += deck[cardGiven];
                cardGiven++;
            }
        }
        return result;
    }
};

int main() {
    CardCount cardCountTest;
    int nbPlayer =4;
    string deckTest ="111122223333";
    vector<string> dealHandsResutl = cardCountTest.dealHands(nbPlayer, deckTest);
    for(const auto& x: dealHandsResutl)
        std::cout << x <<" ";
    return 0;
}