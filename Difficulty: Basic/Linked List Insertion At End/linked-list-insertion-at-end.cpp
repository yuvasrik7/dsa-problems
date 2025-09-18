/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
         Node *newnode=new Node(x);
        Node *temp=head;
        if(head==nullptr) {
           head=newnode;
            return head;
        }
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
       
        temp->next=newnode;
        return head;
    }
};