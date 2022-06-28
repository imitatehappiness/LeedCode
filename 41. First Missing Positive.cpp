#include <iostream>
#include <vector>

using namespace std;

// Runtime: 206 ms
// Memory Usage: 83.2 MB
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sizeNums = nums.size();

        if(sizeNums == 1){
            if(nums[0] != 1){
                return 1;
            }

            if(nums[0] == 1){
                return 2;
            }
        }
        vector<bool> present(sizeNums);

        for(int i=0;i<sizeNums;i++){
            if(nums[i]>0 && nums[i]<=sizeNums){
                present[nums[i]] = true;
            }
        }

        for(int i=1;i<sizeNums+1;i++){
            if(!present[i]){
                return i;
            }
        }
        return sizeNums + 1;
    }
};
