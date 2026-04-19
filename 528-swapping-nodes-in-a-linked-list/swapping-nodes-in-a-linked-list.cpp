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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head->next)
        return head;
        ListNode*temp1=head,*temp2=head;
        int count=0;
        while(temp1)
        {
            count++;
            temp1=temp1->next;
        }
        temp1=head;
        for(int i=1;i<k;i++)
        {
            temp1=temp1->next;
        }
        for(int i=0;i<count-k;i++)
        {
            temp2=temp2->next;
        }
        swap(temp1->val,temp2->val);
        return head;
    }
};