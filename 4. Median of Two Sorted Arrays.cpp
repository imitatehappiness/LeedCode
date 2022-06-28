#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 47 ms
// Memory Usage: 89.7 MB
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    vector<int> mergeVec(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), mergeVec.begin());
    return mergeVec.size() % 2 == 1 ? static_cast<double>(mergeVec[mergeVec.size() / 2]) :
        static_cast<double>(mergeVec[mergeVec.size() / 2] + mergeVec[mergeVec.size() / 2 - 1]) / 2;
    }
};
