class Solution {
  public:
    void recLeftView(Node* root, int level, vector<int>& result) {
        if (root == nullptr)
            return;

        // first node of current level
        if (level == result.size()) {
            result.push_back(root->data);
        }

        recLeftView(root->left, level + 1, result);
        recLeftView(root->right, level + 1, result);
    }

    vector<int> leftView(Node* root) {
        vector<int> result;
        recLeftView(root, 0, result);
        return result;
    }
};
