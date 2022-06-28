#include <iostream>
#include <vector>
using namespace std;

// Runtime: 898 ms
// Memory Usage: 10.1 MB
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(size_t i = 0; i < nums.size(); i++){
            for(size_t j = i + 1; j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};

