#include <iostream>
#include <stack>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 6.5 MB
bool backspaceCompare(string s, string t) {
    stack<char> ss;
    stack<char> st;
    for(auto ch : s){
        if(ch != '#')
            ss.push(ch);
        else if(!ss.empty())
            ss.pop();
    }
    
    for(auto ch : t){
        if(ch != '#')
            st.push(ch);
        else if(!st.empty())
            st.pop();
    }
    
    if(ss.size() != st.size()){
        return false;
    }
    
    while(!ss.empty()){
        if(ss.top() == st.top())
        {
            st.pop();
            ss.pop();
        }
        else
            return false;
    }
    return true;
}

