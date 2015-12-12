/*
 * TopCoder
 * Single Round Match: 166 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1880 
 */

#include <iostream>
#include <vector>

using namespace std;

class Workshop {
public:
    int pictureFrames(vector<int> pieces) {
        int result = 0;
        
        for (int i = 0; i < pieces.size() -2 ; ++i) {
            for (int j = i + 1; j < pieces.size() -1; ++j) {
                for (int k = j + 1; k < pieces.size(); ++k) {
                    if ((pieces[i] + pieces[j] > pieces[k] && pieces[i] + pieces[k] > pieces[j] && pieces[j] + pieces[k] > pieces[i])) {
                        ++result;
                    }
                }
            }
        }
        return result;
    }
};
