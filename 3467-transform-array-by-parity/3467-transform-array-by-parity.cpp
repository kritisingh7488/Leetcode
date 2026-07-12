class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int even=0;
        int odd=0;
        for(int i =0; i<n;i++){
            if(nums[i]%2==0){
                // nums[i]=0;
                even++;
            }
            else{
                // nums[i]=1;
                odd++;
            }
        }
        // sort(nums.begin(),nums.end());
        for(int i =0; i<even;i++){
            nums[i]=0;
        }
        for(int i =even;i<n;i++){
            nums[i]=1;
        }
        return nums;
    }
};