class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       // lets think the intuition
       // i count number of elements in the nums
    //    now i traverse and make a vector and push back with the 
    // size of the nums
    // lets make a hashmap of counts and track max m=element
    int maxi = 0;
     unordered_map<int,int> c;
     for(int i = 0; i <nums.size();i++){
         c[nums[i]]++;
         maxi= max(maxi,c[nums[i]]);
     } 
     vector<vector<int>>res;
for(int i = 0;i<maxi;i++){
vector<int>a;
    for(auto j:c){
if(j.second>0){
    a.push_back(j.first);
    c[j.first]--;

}
    }
    if(a.size()!=0){
res.push_back(a);
a.clear();
}
}
return res;
    }
};