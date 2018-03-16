//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

ListNode* isPal(ListNode* head, ListNode* tail){
    if (tail==nullptr) return head;

    if(tail->next == nullptr) {
        return head->val == tail->val ? head->next : nullptr;
    }

    ListNode* check = isPal(head, tail->next);

    if (check == nullptr) return nullptr;

    return check->val == tail->val ? check->next : nullptr;
}

bool isPalindrome(ListNode* head) {
    if (head == nullptr) return true;
    return isPal(head, head->next) != nullptr;
}

int main(){

}
