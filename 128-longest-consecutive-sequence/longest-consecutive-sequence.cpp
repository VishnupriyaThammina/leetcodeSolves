class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
    int curr =1;
    int maxi = 1;
    for(int i = 1; i <nums.size();i++){
        if(nums[i-1]!=nums[i]){
            if(nums[i-1]+1==nums[i]){
                curr = curr+1;
            }else{
                curr = 1;
            }
                maxi = max(maxi,curr); 

        }
    }
    return maxi;
    }
};