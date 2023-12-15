class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>a;
        for(int i = 0 ; i < nums.size();i++){
            a[nums[i]]++;
        }
        int  j = 0;
     for(auto i : a){
nums[j] = i.first;
j++;
     }
        return a.size();
    }
};