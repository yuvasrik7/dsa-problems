/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node * reverselist(Node* head)
    { Node * prev=nullptr;
        while(head)
        {   
             Node* nextnode=head->next;
             head->next=prev;
             prev=head;
             head=nextnode;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        //  code here
        Node * slow=head;
        Node * fast=head;
        if(!head || !head->next) return true;
        while(fast->next && fast->next->next )
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverselist(slow->next);
        Node *p1=head;
        Node*p2=slow->next;
        while(p2)
        {
            if(p1->data!=p2->data) return false;
            p1=p1->next;
            p2=p2->next;
        }
        return true;
        
    }
    
};