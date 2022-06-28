#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

// Runtime: 3 ms
// Memory Usage: 6.4 MB
class Solution {
public:
    char swicth(char tmp){
        char res;
        switch(tmp){
        case ')': res = '('; break;
        case '}': res = '{'; break;
        case ']': res = '['; break;
        }
        return res;
    }
    bool isValid(string s) {
        stack<char> brackets;

        if(s == ""){
            return true;
        }

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                brackets.push(s[i]);
            }else{
                if(brackets.empty()){
                    return false;
                }

                if(brackets.top() != swicth(s[i])){
                    cout << brackets.top() << " " << s[i]<<endl;
                    return false;
                }
                brackets.pop();
            }
        }

        return brackets.empty() ? true : false;
    }
};
