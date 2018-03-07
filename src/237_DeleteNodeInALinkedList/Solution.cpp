//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

void deleteNode(ListNode* node) {
    ListNode* temp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    delete temp;
}

int main(){

}
