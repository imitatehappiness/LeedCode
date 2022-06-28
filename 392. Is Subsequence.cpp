#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.4 MB
class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> letters;
        for(int i = 0; i < s.size(); i++){
            letters.push(s[s.size() - 1 - i]);
        }

        if(letters.size() == 0){
            return true;
        }
        for(int i = 0; i < t.size(); i++){
            if(letters.top() == static_cast<char>(t[i])){
                letters.pop();

                if(letters.size() == 0){
                    return true;
                }
            }
        }
        return letters.empty();
    }
};
