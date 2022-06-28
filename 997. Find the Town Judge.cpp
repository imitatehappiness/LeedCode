#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Runtime: 224 ms
// Memory Usage: 61.7 MB
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int, int> dv;

        if(trust.size() == 0 ){
            if(n == 1){
                return n;
            }
            return -1;
        }

        for(int i = 0; i < trust.size(); i++){
            dv[trust[i][1]]++;
            dv[trust[i][0]]--;
        }

        for(auto a : dv){
            if(a.second == n - 1){
                return a.first;
            }
        }
        return -1;
    }
};
