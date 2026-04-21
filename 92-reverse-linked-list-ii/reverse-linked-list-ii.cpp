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
 ListNode* reversev(ListNode*head)
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || !head->next) return head;

        ListNode* dummy=new ListNode(0);
        dummy->next = head;
        ListNode* temp1 = dummy;

        // move temp1 to node before 'left'
        for (int i = 1; i < left; i++) {
            temp1 = temp1->next;
        }

        // temp2 points to 'left' node
        ListNode* temp2 = temp1->next;
        ListNode* curr = temp2;

        // move curr to 'right' node
        for (int i = left; i < right; i++) {
            curr = curr->next;
        }

        // save node after 'right'
        ListNode* after = curr->next;
        curr->next = NULL; // cut the sublist

        // reverse sublist
        ListNode* newHead = reversev(temp2);

        // reconnect
        temp1->next = newHead;
        temp2->next = after;

        return dummy->next;
    }
};