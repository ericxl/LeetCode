//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* merge( ListNode* head1 , ListNode * head2){
    ListNode* d = new ListNode (0);            // dummy node
    ListNode* e = d;
    while(head1||head2){
        if(head1 && (!head2 || head1->val <= head2 -> val) ){
            e=e->next= head1 ;
            head1 = head1 -> next;
        }
        if(head2 && (!head1 || head2->val < head1 -> val) ){
            e=e->next= head2 ;
            head2 = head2 -> next;
        }
    }
    e->next = nullptr;
    delete d;
    return d->next;
}

ListNode* sortList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode* second = head;
    ListNode* firstLast = nullptr;
    ListNode* endCheck = head;

    while (endCheck != nullptr && endCheck->next != nullptr){
        firstLast = second;
        second = second->next;
        endCheck = endCheck->next->next;
    }
    firstLast->next = nullptr;

    return merge(sortList(head), sortList(second));

}
