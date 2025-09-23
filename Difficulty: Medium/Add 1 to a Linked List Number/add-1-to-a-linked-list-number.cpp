/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* reverse(Node* head)
  {
      Node* prev=nullptr;
       Node* nextnode=nullptr;
       Node* current=head;
       while(current!=nullptr)
       {nextnode=current->next;
       current->next=prev;
       prev=current;
       current=nextnode;
           
       }
       return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        int value,r,q;
        bool flag=false;
        Node *newhead=reverse(head);
        Node* temp=newhead;
         Node*n;
         value=temp->data+1;
            r=value%10;
            q=value/10;
           
             Node* newnode=new Node(r);
             n=newnode;
             Node*nhead=n;
            temp=temp->next;
        while(temp!=nullptr)
        {    if(q!=0)
            {
             value=temp->data+q; 
             
            }
           
            else
            {
                value=temp->data;
            }
             r=value%10;
            q=value/10;
            
           
            Node* newnode=new Node(r);n->next=newnode;
            n=newnode;
            temp=temp->next;
           
        }
         if(q==1)
            {   flag=true;
            }
       Node*rhead=reverse(nhead);
       if(flag==true)
       {    int k=1;
           newnode=new Node(k);
           newnode->next=rhead;
           rhead=newnode;
       }
       return rhead;
        
        // return head of list after adding one
    }
};