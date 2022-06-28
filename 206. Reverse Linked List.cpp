#include <iostream>

using namespace std;

// Runtime: 11 ms
// Memory Usage: 8.3 MB

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode* previous = nullptr;
    ListNode* current = head;
    ListNode* next = current->next;

    while(current != nullptr){
        current->next = previous;
        previous = current;
        current = next;
        if(current != nullptr){
            next = current->next;
        }
    }
    return previous;
}
