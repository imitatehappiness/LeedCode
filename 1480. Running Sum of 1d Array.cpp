#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 8.6 MB
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = 0;
        for_each(nums.begin(), nums.end(), [&sum, &result](const int& element){
            sum += element;
            result.push_back(sum);
        });
        return result;
    }
};
