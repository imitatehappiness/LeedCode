#include <iostream>
#include <string>

using namespace std;

// Runtime: 28 ms
// Memory Usage: 13.5 MB
class Solution {
public:
    int minPartitions(string n) {
        int max = 0;
        for(char num : n){
            if(max < num - '0'){
                max = num - '0';
            }
        }
        return max;
    }
};
