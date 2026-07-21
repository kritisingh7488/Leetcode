class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
         priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,-it->first});
        }
        vector<int> ans;
        while(pq.size()){
            auto f = pq.top();
            for(int i=0;i<f.first;i++){
                ans.push_back(-f.second);
            } 
            pq.pop();
        }
        
        return ans;
    }
};