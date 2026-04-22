/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
        return NULL;

        Node* curr=head;
        while(curr)
        {
            Node*temp=new Node(curr->val);
            temp->next=curr->next;
            curr->next=temp;
            curr=temp->next;
        }
        curr=head;
        while(curr)
        {
            if(curr->random)
               {
                curr->next->random=curr->random->next;
                }
                curr=curr->next->next;
        }
        Node*result=head->next,*temp=head->next;
        curr=head;
        while(curr)
        {
            curr->next=temp->next;
            curr=temp->next;
            if(curr)
            {
                temp->next=curr->next;
                temp=curr->next;
            }
        }
        return result;
    }
};