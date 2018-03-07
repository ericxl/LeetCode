//
// Created by Eric Liang on 2/26/18.
//

#include <leetcode.h>

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode start = ListNode(0);
    ListNode *current = &start;

    ListNode *a1 = l1;
    ListNode *a2 = l2;

    while (a1 != nullptr || a2 != nullptr) {
        if (a1 == nullptr) {
            current->next = a2;
            current = current->next;
            a2 = a2->next;
        } else if (a2 == nullptr) {
            current->next = a1;
            current = current->next;
            a1 = a1->next;

        } else if (a1->val < a2->val) {
            current->next = a1;
            current = current->next;
            a1 = a1->next;

        } else {
            current->next = a2;
            current = current->next;
            a2 = a2->next;
        }
    }

    return start.next;
}

int main() {

}
