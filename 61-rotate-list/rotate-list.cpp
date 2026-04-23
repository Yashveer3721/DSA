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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
        return NULL;
        if(!head->next)
        return head;
        //count nodes
       int count=0;
       ListNode*temp=head,*prev=NULL;
       while(temp)
       {
        count++;
        prev=temp;
        temp=temp->next;
       }
       //if k=length means list unchanged
       if(count-k%count==count)
       return head;
       
       //make circular list
       prev->next=head;

       //tail position =[count-k%count-1] index
       ListNode*tail=head;
       for(int i=1;i<=count-k%count-1;i++)
       {
        tail=tail->next;
       }
       //head will be next of tail
       head=tail->next;
       tail->next=NULL;
       return head;
    }
};