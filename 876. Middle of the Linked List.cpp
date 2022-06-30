#include <iostream>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 7 MB
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *result = head, *fast = head;
        
        while(fast && fast->next){
            result = result->next;                                  
            fast = fast->next->next;                          
        }
        return result;
    }
};