#include <iostream>
#include <string>

using namespace std;

string helper(string &s, int &i){
    string res;
    
    while(i < s.length() and s[i] != ']'){
        if(!isdigit(s[i])){
            res += s[i++]; 
        } else {
            int n = 0;
            
            while(i < s.length() and isdigit(s[i])){
                n = n * 10 + s[i++] - '0'; 
            }
            
            i++; // skip '['
            string ans = helper(s, i);
            i++; // skip ']'
            
            while(n-- > 0){
                res += ans;
            }
        }
    }    
    return res;
}

string decodeString(string s) {
    int i = 0;
    string ans = helper(s, i);
    return ans;
}
