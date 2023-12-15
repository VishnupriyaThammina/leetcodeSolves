class Solution {
public:
    string destCity(vector<vector<string>>& des) {
        int m = des.size();
        unordered_map<string,int> mp;
        for(int i = 0; i<des.size();i++){
            mp[des[i][0]]++;
        }
        for(int i =0;i<des.size();i++){
            if(mp[des[i][1]]<1){
                return des[i][1];
            }
        }
        
        return "";
    }
};