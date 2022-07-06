#include <iostream>
#include <vector>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.3 MB
int climbStairs(int n) {
    vector<int> steps(n + 1, 0);
    steps[0] = 1;
    steps[1] = 1;
    for(int i = 2; i <= n; i++){
        steps[i] = steps[i-1] + steps[i-2];
    }
    return steps[n];
}



