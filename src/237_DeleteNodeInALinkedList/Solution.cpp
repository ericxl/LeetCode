//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode* node) {
    ListNode* temp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    delete temp;
}

int main(){

}
