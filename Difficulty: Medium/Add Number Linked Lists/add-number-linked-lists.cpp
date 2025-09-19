/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node* removeLeadingZeros(Node* head) {
    while (head && head->data == 0 && head->next) {
        head = head->next;
    }
    return head;
}

    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node *nextnode=nullptr;
        Node *prev=nullptr;
        while(head1)
        {
            nextnode=head1->next;
            head1->next=prev;
            prev=head1;
            head1=nextnode;
        }
        head1=prev;
         nextnode=nullptr;
         prev=nullptr;
        while(head2)
        {
            nextnode=head2->next;
            head2->next=prev;
            prev=head2;
            head2=nextnode;
        }
        int value;
        head2=prev;
        Node* head3=nullptr;int q=0;
        Node* temp1=head1,*temp2=head2,*temp3=head3;
        
        
        while(temp1!=nullptr && temp2!= nullptr)
        {   value=temp1->data+temp2->data+q;
            q=value/10;
            int r=value%10;
        Node * newnode = new Node(r);
        if(head3==nullptr) head3=temp3=newnode;
        else{
            
         temp3->next=newnode;
         temp3=temp3->next;
            
        }
        temp1=temp1->next;
        temp2=temp2->next;
        }
        
        while(temp1!=nullptr)
        {    value=temp1->data+q;
       
        
         q=value/10;
            int r=value%10;
             Node * newnode = new Node(r);
        temp3->next=newnode;
         temp3=temp3->next;
             temp1=temp1->next;
        }
        while(temp2)
        {    
             value=temp2->data+q;
         q=value/10;
            int r=value%10;
             Node * newnode = new Node(r);
              
        temp3->next=newnode;
         temp3=temp3->next;
            
             temp2=temp2->next;
        }
        if(q!=0)
        {
         Node * newnode = new Node(q);
         temp3->next=newnode;
        }
    nextnode=nullptr;
        prev=nullptr;
        while(head3)
        {
            nextnode=head3->next;
            head3->next=prev;
            prev=head3;
            head3=nextnode;
        }
        
return removeLeadingZeros(prev);
    
    }
    
};