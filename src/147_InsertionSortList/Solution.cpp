//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

void swap(ListNode* n1, ListNode* n2){
    int temp = n2->val;
    n2->val = n1->val;
    n1->val = temp;
}

ListNode* insertionSortList(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;

    ListNode* cur = &dummy;



    while (cur->next != nullptr){
        cur = cur->next;

        ListNode* start = head;
        while (start != cur){
            if (start->val > cur->val) {
                swap(start, cur);
            }
            start = start->next;
        }

    }
    return head;
}

int main(){
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(1);
    ListNode* n3 = new ListNode(5);

    n2->next = n3;
    n1->next = n2;

    ListNode* r = insertionSortList(n1);

}
