#include <iostream>
#include <vector>

using namespace std;

// Runtime: 246 ms
// Memory Usage: 93.2 MB
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit,pist;
        int min = INT_MAX;
        profit = pist = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            pist = prices[i] - min;
            if(profit < pist){
                profit = pist;
            }
        }

        return profit;
    }
};
