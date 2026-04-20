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
  ListNode* mergesort(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2)
        return NULL;
        if(!list1)
        return list2;
        if(!list2)
        return list1;
        ListNode* head=new ListNode(0);
        ListNode* tail=head;
        while(list1 && list2)
        {
            if(list1->val<=list2->val)
            {
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
                tail->next=NULL;
            }
            else
            {
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;
                tail->next=NULL;
            }
        }
        if(!list1)
        tail->next=list2;
        else
        tail->next=list1;
        return head=head->next;
    }
 ListNode* merge(vector<ListNode*>& arr,int start,int end)
 {
    if(start==end)
    return arr[start];
    int mid=start+(end-start)/2;
    ListNode* head1=merge(arr,start,mid);
    ListNode* head2=merge(arr,mid+1,end);
    return mergesort(head1,head2);
 }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())
        return NULL;
        return merge(lists,0,lists.size()-1);
    }
};