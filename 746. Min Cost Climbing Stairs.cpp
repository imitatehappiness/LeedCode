#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 13.9 MB
int minCostClimbingRecursive(vector<int>& totalCoats, vector<int>& cost, int step){
    if(step >= cost.size()){
        return 0;
    }
    if(totalCoats[n] != -1){
        return totalCoats[step];
    }
    if(n==0){
        return totalCoats[step] = min(min(cost[step] + minCostClimbingRecursive(totalCoats, cost, step + 1),
                                          cost[step] + minCostClimbingRecursive(totalCoats, cost, step + 2)),
                                      min(cost[step + 1] + minCostClimbingRecursive(totalCoats, cost, step + 2),
                                          cost[step + 1] + minCostClimbingRecursive(totalCoats, cost, step + 3)));
    }
    return totalCoats[step] = min(cost[step] + minCostClimbingRecursive(totalCoats, cost, step + 1),
                                  cost[step] + minCostClimbingRecursive(totalCoats, cost, step + 2));
}

int minCostClimbingStairs(vector<int>& cost) {
    vector<int> totalCoats(cost.size(), -1);
    return minCostClimbingRecursive(totalCoats, cost, 0);
}



