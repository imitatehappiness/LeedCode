#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 7.7 MB
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> qStones;
        for(int i=0;i < stones.size();i++){
            qStones.push(stones[i]);

        }

        int stone1, stone2;
        while(qStones.size()>=2){
            stone1 = qStones.top();
            qStones.pop();
            stone2 = qStones.top();
            qStones.pop();
            int newStone = stone1 - stone2;

            if(newStone != 0){
                qStones.push(newStone);
            }
        }

        return !qStones.empty() ? qStones.top() : 0;
    }
};
