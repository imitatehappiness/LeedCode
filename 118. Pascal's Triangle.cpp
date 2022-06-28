#include <iostream>
#include <vector>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.5 MB
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> first{1};
        res.push_back(first);
        
        if(numRows == 1){
            return res;
        }
        vector<int> second{1, 1};
        res.push_back(second);
        if(numRows == 2){
            return res;
        }
        
        for(int i = 2; i < numRows; i++){
            vector<int> tmp{1};
            for(int j = 0; j < res[i - 1].size() - 1; j++){
                tmp.push_back(res[i - 1][j] + res[i - 1][j + 1]);
            }
            tmp.push_back(1);
            res.push_back(tmp);
        }
        return res;
    }
};
