#include <iostream>
#include <vector>

using namespace std;

// Runtime: 8 ms
// Memory Usage: 8.4 MB
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> values;

        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "D" && ops.size() >= 1){
                values.push_back(values[values.size() - 1] * 2);
            }else if(ops[i] == "C" && ops.size() >= 1){
                values.resize(values.size() - 1);
            }else if(ops[i] == "+" && ops.size() >= 2){
                values.push_back(values[values.size() - 1] + values[values.size() - 2]);
            }else{
                int integer = std::stoi(ops[i]);
                values.push_back(integer);
            }
        }

        int sum = 0;
        for(int i = 0; i< values.size(); i++){
            sum += values[i];
        }
        return sum;
    }
};
