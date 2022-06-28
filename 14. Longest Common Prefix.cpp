#include <iostream>
#include <string>

using namespace std;

// Runtime: 7 ms
// Memory Usage: 9 MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if( strs.size() <= 0  || strs.size() >= 200 ){
            return "";
        }

        if(strs.size() == 1){
            return strs[0];
        }

        for(int i = 0; i < strs[0].size();i++){
            for(int j = 0; j < strs.size() - 1; j++){
                if(strs[j][i] != strs[j + 1][i] || ( strs[j].size() <= 0  || strs[j].size() >= 200) || ( strs[j + 1].size() <= 0  || strs[j + 1].size() >= 200)){
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;

    }
};
