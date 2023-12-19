class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int>s2;
        for(int i = 0 ; i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i = 0 ; i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        vector<vector<int>> res;
        vector<int> a;
        for(auto i : s1){
            if(s2.find(i)==s2.end()){
                a.push_back(i);
            }
        }
        res.push_back(a);
        vector<int> b;
         for(auto i : s2){
            if(s1.find(i)==s1.end()){
                b.push_back(i);
            }
        }
        res.push_back(b);
        return res;
    }
};