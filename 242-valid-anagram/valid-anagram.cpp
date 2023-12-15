class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
       unordered_map<int,int> count1;
       unordered_map<int,int> count2;

       for(int i = 0 ; i <s.length();i++){
count1[s[i]]++;
       } 
       for(int i= 0 ; i <t.length();i++){
           count2[t[i]]++;
       }
       for(auto i:count1){
           if(count2[i.first]!=i.second){
               return false;
           }
       }
       return true;
    }
};