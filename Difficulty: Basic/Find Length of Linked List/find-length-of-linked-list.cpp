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
    int getCount(Node* head) {
        // Code here
        int len=0;
        Node* temp;
        temp=head;
        while(temp!=nullptr)
        {
            temp=temp->next;
            len++;
        }
        return len;
        
    }
};