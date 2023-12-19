class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;
        for(int i = 0; i < arr.size();i++){
            count[arr [i]]++;
        }
        unordered_map<int,int> count2;
        for(auto i : count){
            if(count2[i.second]!=0){
return false;
            }
            count2[i.second]++;
        }
        return true;
    }
};