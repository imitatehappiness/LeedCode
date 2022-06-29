#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 9.1 MB
template <typename T>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n == 0){
        return;
    }
    for(int i = m; i < nums1.size(); i++){
        nums1[i] = nums2[i - m];
    }
    sort(nums1.begin(), nums1.end());
}


