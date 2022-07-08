#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Runtime: 11 ms
// Memory Usage: 7.1 MB
int characterReplacement(string s, int k) {
    int start = 0, end = 0, result = 0;
    vector<int> letters(26,0);
    int size = s.size(), countMax = 0;
    
    for(end = 0; end < size; end++) {
        letters[s[end] - 'A']++;
        countMax = max(countMax, letters[s[end] - 'A']);
        if(end - start + 1 - countMax > k) {
            letters[s[start] - 'A']--;
            start++;
        }
        result = max(result, end - start + 1);
    }
    return result;
}


