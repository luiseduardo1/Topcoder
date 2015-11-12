/*
 * TopCoder
 * Single Round Match: 153
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1774
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MostProfitable{
public:
    string bestItem(vector <int> costs, vector <int> prices, vector <int> sales, vector <string> items){
        string result;
        int profitMax = 0;
        
        for(int i = 0; i < items.size(); i++){
            int profit = (prices[i] - costs[i]) * sales[i];
            if (profit > profitMax) {
                result = items[i];
                profitMax = profit;
            }
        }
        return result;
    }
};

// First version of the class
/*
class MostProfitable{
public:
    string bestItem(vector <int> costs, vector <int> prices, vector <int> sales, vector <string> items){
        int maxProfit = 0;
        int profit = 0;
        int itemIndex = -1;
        
        for(size_t i = 0; i != costs.size(); i++){
            profit = (prices[i] - costs[i]) * sales[i];
            if (profit > maxProfit) {
                maxProfit = profit;
                itemIndex = i;
            }
        }
        if (itemIndex == -1){
            return "";
        }else{
            return items[itemIndex];
        }
    }
};
*/

int main(){
    MostProfitable mostProfitableTest;
    vector <int> costs = {100,120,150,1000};
    vector <int> prices = {110,110,200,2000};
    vector <int> sales = {20,100,50,3};
    vector <string> items = {"Video Card","256M Mem","CPU/Mobo combo","Complete machine"};
    cout << mostProfitableTest.bestItem(costs, prices,sales,items) << endl;
    return 0;
}
