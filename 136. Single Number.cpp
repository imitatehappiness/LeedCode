#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Runtime: 80 ms
// Memory Usage: 20.9 MB
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;
        for(int i = 0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        for(auto a : count){
            if(a.second == 1){
                return a.first;
            }
        }
        return -1;
    }
};
