/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
       Node* ptr1=head;
       Node* ptr2=head;
       for(int i=0;i<k;i++)
       {   if(ptr1!=nullptr)
         {
           ptr1=ptr1->next;
         }
         else 
         {
             return -1;
         }
       }
       
       while(ptr1!=nullptr)
       {
         ptr1=ptr1->next;
         ptr2=ptr2->next;
       }
       return ptr2->data;
        
    }
};