#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Runtime: 281 ms
// Memory Usage: 54.8 MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> numbers(nums.begin(),nums.end());
        return nums.size() == numbers.size() ? false : true;
    }
};
