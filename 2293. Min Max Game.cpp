#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 19 ms
// Memory Usage: 9.8 MB
int minMaxGame(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    if(nums.size() == 2){
        return *min_element(nums.begin(), nums.end());
    }

    int result;
    bool MinMax = false;
    int n = nums.size() / 2;
    int i;
    for(i = 0; i < n; i+=1){
        if(!MinMax){
            int min = *min_element(nums.begin() + i, nums.begin() + i + 2);
            if(min == nums[i]){
                nums.erase(nums.begin() + i + 1);
            }else{
                nums.erase(nums.begin() + i);
            }

        }

        if(MinMax){
            int max = *max_element(nums.begin() + i, nums.begin() + i + 2);
            if(max == nums[i]){
                nums.erase(nums.begin() + i + 1);
            }else{
                nums.erase(nums.begin() + i);
            }

        }

        MinMax = !MinMax;

        if(nums.size() == 1){
            result = nums[0];
        }

        if(nums.size() == n){
            i = -1;
            n = n / 2 ;
        }
    }
    return result;
}
