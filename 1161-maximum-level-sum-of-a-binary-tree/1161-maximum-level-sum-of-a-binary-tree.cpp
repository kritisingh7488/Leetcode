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
    int maxLevelSum(TreeNode* root) {
        int l=1;
        int ans =1;
        int mx=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            int sum =0;
            for(int i =0; i<s;i++){
                TreeNode* f = q.front();
                q.pop();
                sum+=f->val;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);

            }
            if(sum>mx){
                mx=sum;
                ans=l;
            }
            l++;
        }
        return ans;
    }
};