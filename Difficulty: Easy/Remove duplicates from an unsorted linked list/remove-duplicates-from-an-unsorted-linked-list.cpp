/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
      unordered_set<int> s;
    
      Node* temp=head;
      Node*prev;
      while(temp!=nullptr)
      {    
           if(s.find(temp->data)!=s.end())
           {
               prev->next=temp->next;
               temp=temp->next;
           }
           else
           {
            s.insert(temp->data);
           prev=temp;
           temp=temp->next;
           }
          
           
          
      }
      return head;
    }
};