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
    bool isPalindrome(ListNode* head) {
        //convert nodes in array then check palindrome

        // ListNode* temp=head;
        // int count=0;
        // while(temp)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        //  vector<int>arr(count);
        // if(count==1)
        // return 1;
        // temp=head;
        // for(int i=0;i<count;i++)
        // {
        //     arr[i]=temp->val;
        //     temp=temp->next;
        // }
        // int start=0,end=count-1;
        // while(start<end)
        // {
        //     if(arr[start]==arr[end])
        //     {
        //         start++,end--;
        //     }
        //     else
        //     return 0;
        // }
        // return 1;

        ListNode*slow=head,*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*pre=NULL,*curr=slow,*future;
        while(curr)
        {
            future=curr->next;
            curr->next=pre;
            pre=curr;
            curr=future;
        }
        ListNode*temp=head;
        while(pre && temp)
        {
            if(temp->val==pre->val)
            {
                temp=temp->next;
                pre=pre->next;
            }
            else
            return 0;
        }
        return 1;
    }
};