class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> a;
        for(int i =0; i<nums.size();i++){
            a[nums[i]]++;
        }
        int maxi = INT_MIN;
int res = 0;
for(auto i : a){
if(maxi<i.second){
    maxi = i.second;
    res = i.first;
}
}
return res;
    }
};