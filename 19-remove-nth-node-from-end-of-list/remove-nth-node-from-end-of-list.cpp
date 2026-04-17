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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int m=count-n;
        if(m==0)
        {
            ListNode*num=head;
            head=head->next;
            delete num;
            return head;
        }
        temp=head;
        for(int i=1;i<m;i++)
        {
            temp=temp->next;
        }
        ListNode*num2=temp->next;
        temp->next=num2->next;
        delete num2;
        return head;
    }
};