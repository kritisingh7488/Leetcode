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
        if(root ==NULL) return;
        ino(root->left,v);
        v.push_back(root->val);
        ino(root->right,v);
    }
    vector<int> merge(vector<int>&v1, vector<int>& v2){
        vector<int> mer;
        int n = v1.size();
        int m = v2.size();
        int i =0;
        int j =0;
        while(i<n && j<m){
            if(v1[i]<v2[j]){
                mer.push_back(v1[i++]);
            }
            else{
                mer.push_back(v2[j++]);
            }
        }
        while(i<n){
            mer.push_back(v1[i++]);
        }
        while(j<m){
            mer.push_back(v2[j++]);
        }
        return mer;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        ino(root1,v1);
        ino(root2,v2);
        return merge(v1,v2);
    }
};