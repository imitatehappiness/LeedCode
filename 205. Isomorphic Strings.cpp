#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Runtime: 25 ms
// Memory Usage: 7.1 MB
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char, int> LettersS;
        map<char, int> LettersT;

        for(int i = 0; i < s.size(); i++){
            if(LettersS[s[i]] != LettersT[t[i]]){
                return false;
            }
            LettersS[s[i]] = i + 1;
            LettersT[t[i]] = i + 1;
        }
        return true;
    }
};
