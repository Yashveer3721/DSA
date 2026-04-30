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
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL, *curr = head, *future;
    while (curr) {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    return prev;
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        // Count total nodes
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }

        int n = count / k;  // number of full groups
        temp = head;
        ListNode*dummy=new ListNode(0);
        dummy->next = head;
        ListNode* prevTail = dummy;
        ListNode* start = head;

        while (n--) {
            // find end of current k-group
            ListNode* end = start;
            for (int i = 1; i < k; i++) {
                end = end->next;
            }
            ListNode* forw = end->next;
            end->next = NULL;

            // reverse current group
            ListNode* newHead = reverseList(start);

            // connect previous tail → new head
            prevTail->next = newHead;

            // connect old start (now tail) → next group
            start->next = forw;

            // move pointers forward
            prevTail = start;
            start = forw;
        }

        return dummy->next;
    }
};
