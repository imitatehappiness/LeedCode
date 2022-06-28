#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1 || nums.size() > 30000){
            return 0;
        }

        int tmp[nums.size()];
        int j = 0;
        for(int i = 0;i < nums.size() - 1;i++){
            if(nums[i]<-101 || nums[i]>101){
                return 0;
            }
            if(nums[i] != nums[i+1]){
                tmp[j++] = nums[i];
            }
        }
        tmp[j++] = nums[nums.size() - 1];
        nums.clear();
        for(int i = 0;i < j;i++){
            nums.push_back(tmp[i]);
        }
        return j;
    }
};
