/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pre=-1;
    int mn=INT_MAX;
    void ino(TreeNode* root){
        if(root == NULL) return;
        ino(root->left);
        if(pre!=-1){
            mn=min(mn,root->val-pre);
        }
        pre=root->val;
        ino(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        ino(root);
        return mn;
    }
};