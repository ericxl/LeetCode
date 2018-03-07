//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if (head == nullptr) return false;
    ListNode* walker = head;
    ListNode* runner = head;

    while (runner->next && runner->next->next){
        walker = walker->next;
        runner = runner->next->next;

        if (walker == runner){
            return true;
        }
    }
    return false;
}

int main(){

}
