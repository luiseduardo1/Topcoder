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