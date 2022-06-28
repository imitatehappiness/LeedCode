#include <iostream>
#include <vector>

using namespace std;

// Runtime: 10 ms
// Memory Usage: 9.7 MB
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            if(target > nums[nums.size() - 1]){
        return nums.size();
    }
    int res;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target || target < nums[i]){
            res = i;
            break;
        }
    }
    return res;
    }
};
