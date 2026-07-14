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
    void pre(TreeNode* root, vector<int>& c){
        if(root==NULL){
            return;
        }
        c.push_back(root->val);
        pre(root->left,c);
        pre(root->right,c);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> c;
        pre(root,c);
        return c;
        
    }
};