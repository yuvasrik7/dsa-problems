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
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node* temp1=head1,*temp2=head2;
        while(temp1!=nullptr && temp2!=nullptr)
        {
            if(temp1->data != temp2->data)
            { 
              return false;  
            }
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
        if(!temp1 && !temp2)
        {
            return true;
        }
        else return false;
    }
};