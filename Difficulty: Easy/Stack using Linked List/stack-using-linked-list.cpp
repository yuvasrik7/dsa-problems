/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
  private:
   Node* top;
  public:
  
    myStack() {
        // Initialize your data members
        
      
        top=nullptr;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==nullptr) return true;
        else return false;
        
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newnode=new Node(x);
        if(top==nullptr) top=newnode;
        else
        {   
            newnode->next=top;
            top=newnode;
        }
        
    }

    void pop() {
        // Removes the top element of the stack
       if(top!=nullptr)
        top=top->next;
      
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(top==nullptr) return -1;
        else return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        Node* temp=top;
        int len=0;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
};