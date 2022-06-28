#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Runtime: 7 ms
// Memory Usage: 6.9 MB
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
                 vector<string> result;
     map<char, int> lettersRow{{'q', 1},{'w', 1},{'e', 1},{'r', 1},{'t', 1},{'y', 1},{'u', 1},{'i', 1},{'o', 1},{'p', 1},
                            {'a', 2},{'s', 2},{'d', 2},{'f', 2},{'g', 2},{'h', 2},{'j', 2},{'k', 2},{'l', 2},
                            {'z', 3},{'x', 3},{'c', 3},{'v', 3},{'b', 3},{'n', 3},{'m', 3}};

     for(string word : words){
         int firstLetterRow = lettersRow[tolower(word[0])];
         bool addWordToRes = true;
         for(char symbol : word){
             if(lettersRow[tolower(symbol)] != firstLetterRow){
                 addWordToRes = false;
                 break;
             }
         }
         if(addWordToRes){
             result.push_back(word);
         }
     }

     return result;
    }
};
