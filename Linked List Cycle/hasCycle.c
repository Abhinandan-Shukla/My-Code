/*Linked List Cycle
Given a linked list, determine if it has a cycle in it.
*/

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
    if(!head)
        return 0;
    struct ListNode *slow=head,*fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow && fast && slow==fast)
            return 1;
    }
    return 0;
}
