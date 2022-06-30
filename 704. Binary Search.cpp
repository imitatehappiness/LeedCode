#include <iostream>
#include <vector>

using namespace std;

// Runtime: 72 ms
// Memory Usage: 27.5 MB
int search(vector<int>& nums, int target) {
    if(nums.size()==1){
        if(nums[0]==target){
            return 0;
        }
        return -1;
    }
    int low = 0;
    int high = nums.size() - 1;
    int mid = (low + high) / 2;
    while(low <= high){
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

