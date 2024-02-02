class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int maxLen = 0;
     int len = s.length();
     unordered_set<char> c; // set to keep track of the current substring with not repeating char
     // which is in the range of this window basically to find longest substring with the help of a sliding window
     int left = 0; // left pointer
     for(int right = 0; right < len;right++){
         // the for loop to traverse 
         // i will have two cases
         if(c.count(s[right])==0){//condition to check this particular char is not present in the set
             c.insert(s[right]);
             maxLen = max(maxLen,right-left+1);//existing max length vs size of the window
         }else{
             while(c.count(s[right])){
                 // checking if this char is present on the set
                //  if it is there
                c.erase(s[left]);
                // here i am removing all the element before we hit repeating char and repeating char it self
                //and the condition is is the right already existing in the set or not
                left++;//moving ahead with my window
             }
             c.insert(s[right]);
         }
     }    
     return maxLen;
    }
};