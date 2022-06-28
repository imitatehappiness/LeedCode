#include <iostream>
#include <vector>

using namespace std;

// Runtime: 10 ms
// Memory Usage: 11.9 MB
int countPrefixes(vector<string>& words, string s) {
    int result = 0;
    for(string word : words){
        bool eq = true;
        if(word.size() > s.size()){
            eq = false;
        }
        for(int i = 0; i < word.size(); i++){
            if(!eq){
                break;
            }
            if(word[i] != s[i]){
                eq = false;
                break;
            }
        }
        if(eq){
            result++;
        }
    }
    return result;
}


