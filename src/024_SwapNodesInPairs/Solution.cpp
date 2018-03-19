//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

ListNode* swapPairs(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* current = &dummy;
    while (current->next != nullptr && current->next->next != nullptr) {
        ListNode* first = current->next;
        ListNode* second = current->next->next;
        first->next = second->next;
        current->next = second;
        current->next->next = first;
        current = current->next->next;
    }
    return dummy.next;
}

int main(){

}
