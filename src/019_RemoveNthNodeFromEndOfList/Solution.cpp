//
// Created by Eric Liang on 3/29/18.
//

#include <leetcode.h>

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode** t1 = &head, *t2 = head;
    for(int i = 1; i < n; ++i)
    {
        t2 = t2->next;
    }
    while(t2->next != NULL)
    {
        t1 = &((*t1)->next);
        t2 = t2->next;
    }
    ListNode* save = *t1;
    *t1 = (*t1)->next;
    delete save;
    return head;
}

int main(){

}
