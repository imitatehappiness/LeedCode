#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Runtime: 295 ms
// Memory Usage: 17.3 MB
int minDeletions(string s) {
    int result = 0;
    vector<int> letters (26, 0);

    sort(s.begin(), s.end());
    for(char letter : s){
        letters[letter - 'a']++;
    }

    sort(letters.begin(), letters.end());

    for(int i = letters.size() - 2; i >= 0; i--){
        if(letters[i] == 0){
            break;
        }

        if(letters[i] >= letters[i + 1]){
            int prev = letters[i];
            letters[i] = max(0, letters[i + 1] - 1);
            result +=  prev - letters[i];
        }
    }

    return result;
}

