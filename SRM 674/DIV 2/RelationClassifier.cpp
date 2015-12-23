/*
 * TopCoder
 * Single Round Match: 674
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=14008
 */

#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Second implementation
class RelationClassifier {
public:
    string isBijection(vector <int> domain, vector <int> range){
        if (allUnique(domain) && allUnique(range)) {
            return "Bijection";
        } else {
            return "Not";
        }
    }
    
private:
    bool allUnique(vector<int> v){
        set<int> s (v.begin(), v.end());
        return (s.size() == v.size());
    }
    
};

/* First implementation
 class RelationClassifier {
 public:
    string isBijection(vector <int> domain, vector <int> range){
        sort(domain.begin(), domain.end());
        sort(range.begin(), range.end());
        string result = "Bijection";
 
        if (domain.size() > 1 && range.size() > 1){
            for (int i = 1; i < domain.size(); ++i) {
                if (domain[i] == domain[i - 1]) {
                    return "Not";
                }
            }
 
            for (int j = 1; j < range.size(); ++j) {
                if (range[j] == range[j -1]) {
                    return "Not";
                }
            }
        }
 
    return result;
    }
 };
 */