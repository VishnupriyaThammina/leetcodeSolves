class Solution {
public:
    string removeStars(string s) {
        string res = "";
        for(auto i : s){
            if(i!='*'){
               res.push_back(i);
            }else if(i=='*'){
             res.pop_back();
            }
        }
      
        return res;
    }
};