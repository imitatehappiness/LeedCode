#include <iostream>

using namespace std;

// Runtime: 17 ms
// Memory Usage: 7.6 MB
ListNode *detectCycle(ListNode *head) {
    if(head == nullptr){
        return head;
    }

    bool isCycle = false;
    ListNode * cur = head;
    ListNode * fast = head;

    while(fast && fast->next){
        cur = cur->next;
        fast = fast->next->next;
        if(cur == fast){
            isCycle = true;
            break;
        }
    }

    if(isCycle){
        ListNode* tmpCur = head;
        while(tmpCur != cur){
            cur = cur->next;
            tmpCur = tmpCur->next;
        }
        return cur;
    }

    return nullptr;
}