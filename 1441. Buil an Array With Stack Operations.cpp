#include <iostream>
#include <vector>

using namespace std;

// Runtime: 4 ms
// Memory Usage: 7.9 MB
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        vector<int> fullArr;
        for(int i = 0; i < n; i++){
            fullArr.push_back(i + 1);
        }

        int indexFullArr = 0;
        for(int i = 0 ; i < target.size(); i++){
            if(target[i] == fullArr[indexFullArr]){
                result.push_back("Push");
            }else{
                result.push_back("Push");
                result.push_back("Pop");
                i--;
            }
            indexFullArr++;

        }
        return result;
    }
};
