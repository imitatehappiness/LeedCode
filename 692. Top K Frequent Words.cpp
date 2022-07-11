#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

// Runtime: 24 ms
// Memory Usage: 12.7 MB
vector<string> topKFrequent(vector<string>& words, int k) {
    map<string, int> countWord;
    vector<pair<string, int>> resultPair;
    vector<string>result;
    for(string word : words){
        countWord[word]++;
    }

    for(auto count : countWord){
        resultPair.push_back({count.first, count.second});
    }

    sort(resultPair.begin(), resultPair.end(), [](const pair<string, int>& a, const pair<string, int>& b){
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    for(int i = 0; i < k; i++){
        result.push_back(resultPair[i].first);
    }
    return result;
}



