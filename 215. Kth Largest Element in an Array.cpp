#include <iostream>
#include <vector>

using namespace std;

// Runtime: 319 ms
// Memory Usage: 10.1 MB
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int maxIndex;
        int max;
        for(int i = 0;i < k; i++){
            maxIndex = 0;
            max = -2147483647;
            auto iter = nums.cbegin();
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] > max){
                    max = nums[j];
                    maxIndex = j;
                }
            }
            nums.erase(iter + maxIndex);
        }
        return max;
    }
};
