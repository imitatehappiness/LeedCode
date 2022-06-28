#include <iostream>
#include <vector>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.8 MB
class Solution {
public:
    vector<int> getRow(int rowIndex) {
            vector<vector<int>> res;
    vector<int> first{1};
    if(rowIndex == 0){
        return first;
    }
    vector<int> second{1, 1};
    if(rowIndex == 1){
        return second;
    }
    res.push_back(second);
    res.push_back(first);

    for(int i = 2; i < rowIndex + 2; i++){
        vector<int> tmp{1};
        for(int j = 0; j < res[i - 1].size() - 1; j++){
            tmp.push_back(res[i - 1][j] + res[i - 1][j + 1]);
        }
        tmp.push_back(1);
        res.push_back(tmp);
    }
    return res[rowIndex + 1];
    }
};
