class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums, int i, vector<int> &psf){
        if(i==nums.size()){
            ans.push_back(psf);
            return;
        }
        helper(nums,i+1,psf);
        psf.push_back(nums[i]);
        helper(nums,i+1,psf);
        psf.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> psf;
        helper(nums,0,psf);
        return ans;
    }
};