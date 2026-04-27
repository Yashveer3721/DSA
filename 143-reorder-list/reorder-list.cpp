/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 ListNode*reverse(ListNode*head)
 {
     ListNode* prev=NULL,*curr=head,*future;
        while(curr)
        {
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        return prev;
 }
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head->next)
        return ;
        ListNode*slow=head,*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*second=reverse(slow->next);
        slow->next=NULL;
        ListNode*first=head;
        while(second)
        {
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
    }
};