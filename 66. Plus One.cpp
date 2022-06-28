#include <iostream>
#include <vector>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 8.7 MB
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool dob = false;
        if(digits[0] == 9 && digits.size() == 1){
            digits.clear();
            digits.push_back(1);
            digits.push_back(0);
            return digits;
        }

        if(digits.size() == 1 && digits[0] != 9){
            digits[0]++;
            return digits;
        }
        for(int i = digits.size() - 1; i >= 0 ;i--){

            if(dob){
                digits[i]++;
            }
            if(i == digits.size() - 1){
                digits[i]++;
            }
            if(digits[i] == 10){
                digits[i] = 0;
                dob = true;
            }else{
                dob = false;
            }

        }
        vector<int> res;
        for(int i = 0;i<digits.size();i++){
            if(digits[i] == 0 && dob && i == 0){
                res.push_back(1);
                res.push_back(0);
            }else{
                res.push_back(digits[i]);
            }
        }
        digits.clear();
        digits = res;
        return digits;
    }
};
