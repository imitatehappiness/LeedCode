#include <iostream>
#include <vector>

using namespace std;

// Runtime: 6 ms
// Memory Usage: 8.9 MB
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        if(val > 100 || val < 0){
            return 0;
        }
        if(nums.size() >100 || nums.size() <0){
            return 0;
        }
        vector<int> res;
        for(int i = 0;i < nums.size() ; i++){
            if(nums[i] > 50 || nums[i] < 0){
                return 0;
            }
            if(nums[i] != val){
                res.push_back(nums[i]);
            }
        }

        nums = res;
        return res.size();
    }
};
