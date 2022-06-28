#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 36 ms
// Memory Usage: 17.9 MB
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum, minValue, maxValue, sum, sumCur;
        missingNum = minValue = maxValue = sum = sumCur = 0;

        sort(nums.begin(), nums.end());
        minValue = nums[0];
        maxValue = nums[nums.size() - 1];
        if(minValue != 0){
            return 0;
        }
        if(maxValue == nums.size() - 1){
            return nums.size();
        }
        for(int i = 0; i < nums.size(); i++){
            sumCur += nums[i];
        }

        sum = ((minValue+maxValue)*(nums.size() + 1))/2;
        missingNum = sum - sumCur;

        if(missingNum == 0){
            missingNum = nums.size();
        }
        return missingNum;
    }
};
