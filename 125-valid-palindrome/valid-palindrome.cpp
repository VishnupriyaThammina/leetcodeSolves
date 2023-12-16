class Solution {
public:
    bool isPalindrome(string s) {
        string dummy = "";
        for(int i = 0; i <s.length();i++){
             char a =s.at(i);
           
            if( (a>=97 && a<=122) || (a>=65 && a<=90) || (a>=48 && a<=57) ){
                if(a>=65 && a<=90){
                    a=a+32;
                }
                dummy.push_back(a);
            }
        }
int j = dummy.length()-1;
int start = 0;
int n=j;
   for(int i = (dummy.length())/2;i<dummy.length();i++){
       if(dummy[start]!=dummy[j]){
           return false;
       }
       j--;
       start++;
   }
        return true;
    }
};