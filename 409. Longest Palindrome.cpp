#include <iostream>
#include <map>
#include <string>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.6 MB
int longestPalindrome(string s) {
    map<char, int> letterCount;
    int result = 0;
    for(char letter : s){
       letterCount[letter]++;
    }
    for(auto it : letterCount){
        cout << it.second << endl;
        it.second % 2 == 0 ? result += it.second : result += it.second - it.second % 2;
    }
    return result == s.size() ? result : ++result;
}

