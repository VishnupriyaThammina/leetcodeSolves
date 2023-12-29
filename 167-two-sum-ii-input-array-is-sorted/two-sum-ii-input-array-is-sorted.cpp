class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
            int comp =0;

        for(int i = 0 ; i < nums.size();i++){
            comp = target-nums[i];
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i+1};
            }
            mp[nums[i]]= i+1;
        }
        return {-1,-1};
    }
};