#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Runtime: 25 ms
// Memory Usage: 8.7 MB
vector<int> findAnagrams(string s, string p) {
    vector<int> lettersS(26,0);
    vector<int> lettersP(26,0);
    vector<int> result;
    
    if(s.size()<p.size()){
        return result;
    }
    
    for(int i = 0; i< p.size(); i++){
        lettersS[s[i] - 'a']++;
        lettersP[p[i] - 'a']++;
    }    
    
    if(lettersS == lettersP){
        result.push_back(0);
    }
    
    int j = 0;
    for(int i = p.size(); i < s.size(); i++, j++){
        lettersS[s[j] - 'a']--;
        lettersS[s[i] - 'a']++;
        if(lettersS == lettersP){
            result.push_back(j + 1);
        }
    }
    return result;
}



