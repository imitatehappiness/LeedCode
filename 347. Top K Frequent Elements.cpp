#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <pair>

using namespace std;

// Runtime: 31 ms
// Memory Usage: 13.7 MB
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == 1  && k == 1){
            return nums;
        }
        map<int, int> countNums;
        vector<int> result;
        for(auto a : nums){
            countNums[a]++;
        }

        vector<pair<int, int>> items;

        for(auto a : countNums){
            items.push_back({a.second, a.first});
        }

        sort(items.begin(), items.end());

        for(int i = 0; i < k; i++){
            result.push_back(items[items.size() - 1 - i].second);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
