#include <iostream>
using namespace std;

// Runtime: 20 ms
// Memory Usage: 5.9 MB
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int tmp = x;
        long int newTmp = 0;
        while(tmp > 0){
            newTmp *= 10;
            newTmp += tmp % 10;
            tmp /= 10;
        }
        return x == newTmp;
    }
};
