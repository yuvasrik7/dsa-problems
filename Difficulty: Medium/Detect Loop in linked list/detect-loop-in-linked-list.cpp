/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node *slow=head;
        Node *fast=head;
       do
        {
            if(fast!=nullptr && fast->next!=nullptr)
            {
                fast=fast->next->next;
                slow=slow->next;
            }
            else return false;
        }while(slow!=fast);
        fast=head;
        while(slow!=fast)
        {
            fast=fast->next;
            slow=slow->next;
        }
        Node *prev=slow;
        while(prev->next!=slow)
        {
            prev=prev->next;
        }
        if(prev->next==slow)
        {
            prev->next==nullptr;
            return true;
        }
    }
};