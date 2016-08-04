/* Swap node in pairs
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
*/

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapPairs(struct ListNode* head)
{
    struct ListNode* res=NULL,*temp,*temp2=NULL;
    while(head && head->next)
    {
        if(!res)
            res=head->next;
        if(temp2)
        {
            temp2->next=head->next;
        }
        temp=head->next;
        head->next=head->next->next;
        temp->next=head;
        temp2=head;
        head=head->next;
    }
    if(head)
    {
        if(!res)
            return head;
    }
    return res;
}
