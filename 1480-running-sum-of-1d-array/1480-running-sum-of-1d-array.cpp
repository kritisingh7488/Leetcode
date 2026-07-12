class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        int sum=0;
        for(int i =0; i<n;i++){
            sum+=nums[i];
            temp.push_back(sum);
        }
        return temp;

    }
};