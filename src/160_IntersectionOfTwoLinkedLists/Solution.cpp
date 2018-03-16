//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr) return nullptr;
    ListNode* a = headA;
    ListNode* b = headB;

    while (a != b){
        if (a == nullptr){
            a = headB;
        }
        else {
            a = a->next;
        }
        if (b == nullptr){
            b = headA;
        }
        else {
            b = b->next;
        }

    }
    return a;
}

int main(){

}
