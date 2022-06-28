#include <iostream>
#include <vector>

using namespace std;

// Runtime: 18 ms
// Memory Usage: 20.2 MB
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int countPlaceForNewFlowers = 0;
        int size = flowerbed.size();
        if(size <= 1){
            return count(flowerbed.begin(), flowerbed.end(), 0) >= n;
        }
        if(size >= 2 && flowerbed[0] + flowerbed[1] == 0){
            flowerbed[0] = 1;
            countPlaceForNewFlowers++;
        }

        for(int i = 0; i < size - 2; i++){
            if((flowerbed[i] + flowerbed[i + 1] + flowerbed[i + 2]) == 0){
                countPlaceForNewFlowers++;
                flowerbed[i + 1] = 1;
            }
        }

        if(flowerbed[size - 1] + flowerbed[size - 2] == 0){
            countPlaceForNewFlowers++;
        }
        return countPlaceForNewFlowers >= n;
    }
};
