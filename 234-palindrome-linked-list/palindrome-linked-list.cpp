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
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
         vector<int>arr(count);
        if(count==1)
        return 1;
        temp=head;
        for(int i=0;i<count;i++)
        {
            arr[i]=temp->val;
            temp=temp->next;
        }
        int start=0,end=count-1;
        while(start<end)
        {
            if(arr[start]==arr[end])
            {
                start++,end--;
            }
            else
            return 0;
        }
        return 1;
    }
};