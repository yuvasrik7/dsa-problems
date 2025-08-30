/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* ptr1=head;
        Node * ptr2=head;
        
        if(!(ptr1->next!=nullptr && ptr1->next->next!=nullptr))
        {
            return ptr1->next->data;
        }
        ptr1=ptr1->next->next;
        ptr2=ptr2->next;
        while(ptr1!=nullptr)
        {   if(ptr1->next!=nullptr)
            {ptr1=ptr1->next->next;
             ptr2=ptr2->next;}
            else ptr1=ptr1->next;
           
        }
        return ptr2->data;
    }
};