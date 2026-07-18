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
    void ino(TreeNode* root, vector<int>& v){
        if(root==NULL) return;
        ino(root->left,v);
        v.push_back(root->val);
        ino(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        ino(root,v);
        bool found=false;
        int n = v.size();
        for(int i =0; i<n;i++){
            for(int j =i+1;j<n;j++){
                if(v[i]+v[j]==k){
                    found= true;
                }
            }
        }
        return found;

    }
};