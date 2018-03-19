//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

ListNode *detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return NULL;

    ListNode* firstp = head;
    ListNode* secondp = head;
    bool isCycle = false;

    while(firstp != nullptr && secondp != nullptr) {
        firstp = firstp->next;
        if (secondp->next == nullptr) return nullptr;
        secondp = secondp->next->next;
        if (firstp == secondp) { isCycle = true; break; }
    }

    if(!isCycle) return nullptr;
    firstp = head;
    while( firstp != secondp) {
        firstp = firstp->next;
        secondp = secondp->next;
    }

    return firstp;
}

int main(){

}
