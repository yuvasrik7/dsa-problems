/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
       if (!head || !head->next) return;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            break;
        }
       if(slow!=fast) return;
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        Node * cycle=slow;
        Node *ptr=slow;
        while(ptr->next!=cycle)
        {
            ptr=ptr->next;
        }
        ptr->next=nullptr;
        
        
        
    }
};