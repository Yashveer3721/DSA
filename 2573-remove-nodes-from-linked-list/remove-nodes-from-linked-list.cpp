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
 ListNode* reverse(ListNode* head)
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
    ListNode* removeNodes(ListNode* head) {
        // ListNode* prev=head,*temp=head->next;
        // while(temp)
        // {
        //     if(temp->val>prev->val)
        //     {
        //         if(prev==head)
        //         {
        //             head=prev->next;
        //             delete prev;
        //             prev=head;
        //         }
        //         else
        //         {

        //         }
        //     }
        //     else if(temp->val<prev->val && temp->next->val<prev->val)
        //     prev=pre->next; 
        //     else
        //     {
        //         temp=temp->next;
        //     }
        // }
//          if(!head || !head->next){
// 	return head;
//    }

//   head->next = removeNodes(head->next);

//   if(head->val < head->next->val){
// 	ListNode *temp = head->next;
// 	delete head;
// 	return temp;
//   }

//   return head;
if(!head || !head->next)
return head;
head=reverse(head);
int maxval=head->val;
ListNode*temp=head->next,*prev=head;
while(temp)
{
    if(temp->val<maxval)
    {
        prev->next=temp->next;
        temp=prev->next;
    }
    else
    {
        maxval=max(maxval,temp->val);
        prev=temp;
        temp=temp->next;
    }
}
return reverse(head);
    }
};