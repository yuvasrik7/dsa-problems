// Function to check if a linked list is circular
class Solution {
  public:
    bool isCircular(Node *head) {
        // If the head is null, the linked list is empty, so it is circular
        if (!head)
            return true;

        Node *temp = head;

        // Traverse the linked list until either the end is reached or the next node is
        // equal to the head
        while (head && head->next != temp)
            head = head->next;

        // If the end is reached before finding the head again, the linked list is not
        // circular
        if (!head || !(head->next))
            return false;

        // If the head is found again before reaching the end, the linked list is
        // circular
        return true;
    }
};