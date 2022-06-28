#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Runtime: 3 ms
// Memory Usage: 6.9 MB
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        string tmp = "";

        for(int i = 0; i < n; i++) {
            int j = i;
            while(j + 1 < n && nums[j + 1] == nums[j] + 1){
                j++;
            }
            if(j > i){
                tmp += to_string(nums[i]);
                tmp += "->";
                tmp += to_string(nums[j]);
            }
            else {
                tmp += to_string(nums[i]);
            }

            ans.push_back(tmp);
            tmp = "";
            i = j;
        }

        return ans;
    }
};
