#include <iostream>
#include <string>
#include <map>
class Solution {
public:
    int maxScore(string s) {
        if(s=="01"){return 2;}
        map<int,int> zeroes;
        map<int,int>ones;
        int count =0;
        for(int i =0; i <s.length()-1;i++){
            if(s[i]=='0'){
                count++;
               
                
            } zeroes[i]=count;
        }
        count =0;
        int  k = 0;
        for(int i = s.length();i>0;i--){
            if(s[i]=='1'){
                count++;
            }
                ones[k++]=count;

        }
       
        int maxi = INT_MIN;
        k = s.length();
        for(int i =0; i<s.length();i++){
            maxi=max(zeroes[i]+ones[k],maxi);
            k--;
        }
        return maxi;
    }
};