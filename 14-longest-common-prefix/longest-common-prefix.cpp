class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string res="";
    int s = INT_MAX;
    int index;
    for(int i = 0; i < strs.size();i++){
        if(s>strs[i].length()){
            s=strs[i].length();
            index = i;
        }
    }
    res = strs[index];
    string f = "";
    while(s!=0){
        s--;
        int flag =0;
        for(int i = 0; i < strs.size();i++){
            if(strs[i].find(res)== string::npos || strs[i].substr(0,res.length())!= res){
                flag = 1;
                break;
            }
        }
        if(flag==0 && f.length()< res.length()){
            f = res;
        }
        res.pop_back();
    }

    return f;
    }
};