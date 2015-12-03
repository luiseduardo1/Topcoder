/*
 * TopCoder
 * Single Round Match: 165 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=18629  
 */

include <vector>

using namespace std;

class BritishCoins
{
    public:
    vector <int> coins(int pence)
    {
        int nbPennies = 0;
        int nbShillings = 0;
        int nbPounds = 0;
        
        nbPounds = pence / 240;
        nbPennies = pence % 240;
        nbShillings = nbPennies / 12;
        nbPennies = nbPennies % 12;
        
        return vector <int> {nbPounds, nbShillings, nbPennies};
    }
};

