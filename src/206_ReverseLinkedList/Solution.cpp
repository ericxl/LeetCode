//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

ListNode* reverseList(ListNode* head) {
    if (!head) return head;
    ListNode* prev = nullptr;
    ListNode* cur = head;
    while (cur){
        ListNode* temp = cur->next;
        cur -> next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

int main(){

}
