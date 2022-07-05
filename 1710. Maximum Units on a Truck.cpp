#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 208 ms
// Memory Usage: 15.9 MB
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    int result = 0;
    int countBox = 0;
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b){
        return  a[1] > b[1];
    });

    for(int i = 0 ; i < boxTypes.size(); i++){
        for(int j = 0; j < boxTypes[i][0]; j++){
           if(countBox < truckSize) {
               result +=  boxTypes[i][1];
               countBox++;
           }else{
               return result;
           }
        }
    }
    return result;
}



