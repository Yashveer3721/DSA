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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp=head;
        // int count=0;
        // while(temp!=NULL)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        
        // if(count%2!=0)
        // {
        //     temp=head;
        //     int n=count/2;
        //     while(n)
        //     {
        //         temp=temp->next;
        //         n--;
        //     }
        //     return temp;
        // }
        // else
        // {
        //     temp=head;
        //     int m=count/2;
        //     while(m)
        //     {
        //         temp=temp->next;
        //         m--;
        //     }
        //     return temp;
        // }
        ListNode* slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};