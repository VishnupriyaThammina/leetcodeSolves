class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // the best solution for two sum 
        // lets make an unordered map
        unordered_map<int,int> mp;
        // we are storing the current number and index if compliment is not found;
        for(int i = 0; i<nums.size();i++){
            int comp = target-nums[i];
            // mp uses find
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i};
            }
            mp[nums[i]]=i;
        }
        return {1,-1};
    }
};