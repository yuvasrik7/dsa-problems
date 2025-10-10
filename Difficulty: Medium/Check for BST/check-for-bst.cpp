/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
public:
    bool check(Node* node, long long minVal, long long maxVal) {
        if (node == nullptr)
            return true;
        
        // The current node must be within the allowed range
        if (node->data <= minVal || node->data >= maxVal)
            return false;

        // Left child must be less, right child must be greater
        return check(node->left, minVal, node->data) &&
               check(node->right, node->data, maxVal);
    }

    bool isBST(Node* root) {
        if (root == nullptr)
            return true;
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
