class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates,int target, int i, vector<int>& psf){
        if(target==0){
            ans.push_back(psf);
            return;
        }
        if(target<0){
            return;
        }
        for(int j=i;j<candidates.size();j++){
            psf.push_back(candidates[j]);
            helper(candidates,target-candidates[j],j,psf);
            psf.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> psf;
        helper(candidates, target, 0,psf);
        return ans;
    }
};