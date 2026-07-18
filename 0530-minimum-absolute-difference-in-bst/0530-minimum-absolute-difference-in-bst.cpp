class Solution {
public:
    int pre = -1;
    int mn = INT_MAX;

    void ino(TreeNode* root) {
        if (root == NULL)
            return;

        ino(root->left);

        if (pre != -1) {
            mn = min(mn, root->val - pre);
        }

        pre = root->val;

        ino(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        ino(root);
        return mn;
    }
};