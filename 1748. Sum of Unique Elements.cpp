#include <iostream>
#include <vector>

using namespace std;

//Runtime: 0 ms
// Memory Usage: 7.9 MB
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> count(101);
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        int sum = 0;
        for(int i = 0; i < count.size(); i++){
            if(count[i] == 1){
                sum += i;
            }
        }
        return sum;
    }
};
