//
// Created by Eric Liang on 2/26/18.
//

#include <leetcode.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* root = nullptr;
    ListNode* result = nullptr;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr || carry != 0){
        if (result != nullptr){
            ListNode* added = new ListNode(0);
            result->next = added;
            result = result->next;
        }
        else {
            result = new ListNode(0);
            root = result;
        }
        int val = carry;
        if (l1 != nullptr){
            val += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr){
            val += l2->val;
            l2 = l2->next;
        }
        if (val >= 10){
            val -= 10;
            carry = 1;
        }
        else {
            carry = 0;
        }
        result->val = val;

    }
    return root;
}

int main(){

}
