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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return NULL;

        // Dummy heads
        ListNode* beforeHead = new ListNode(0);
        ListNode* afterHead = new ListNode(0);

        // Tails to build lists
        ListNode* before = beforeHead;
        ListNode* after = afterHead;

        while(head) {
            if(head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }

        // Important: terminate after list
        after->next = NULL;

        // Connect before list to after list
        before->next = afterHead->next;

        return beforeHead->next;
    }
};
