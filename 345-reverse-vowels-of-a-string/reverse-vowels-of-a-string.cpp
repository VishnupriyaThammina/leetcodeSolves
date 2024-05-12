class Solution {
public:
    string reverseVowels(string s) {
    vector<int> arr;
    vector<int> arr2;

    unordered_map<int,char> mp;

   set<char> vowels ={'a','e','i','o','u','A','E','I','O','U'};
   for(int i =0;i<s.length();i++){
    if(vowels.find(s[i])!=vowels.end()){
        arr.push_back(i);
        arr2.insert(arr2.begin(),i);
       mp[i]=s[i];
    }
   }
   for(int i =0;i<arr.size();i++){
s[arr[i]]=mp[arr2[i]];
   }

return s;
    }
};