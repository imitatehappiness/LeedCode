#include <iostream>
#include <map>
#include <string>

using namespace std;

// Runtime: 3 ms
// Memory Usage: 6.7 MB
string getHint(string secret, string guess) {
    int cows = 0, bulls = 0;
    map<char, int> nums;
    for(int i = 0 ; i < guess.size(); i++){
        if(secret[i] == guess[i]){
            bulls++;
        } else{
            nums[secret[i]]++;
        }
    }
    
    for(int i = 0; i < guess.size(); i++){
        if(secret[i] != guess[i] && nums.find(guess[i]) != nums.end() && nums[guess[i]] > 0){
            nums[guess[i]]--;
            cows++;
        }
    }
     
    return to_string(bulls) + "A" + to_string(cows) + "B";
}
