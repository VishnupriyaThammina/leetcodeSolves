class Solution {
public:
    int climbStairs(int n) {
      int prev1 = 1;
      int prev2 = 1;
      int cur = 1;
      for(int i =1;i<n;i++ ){
          cur = prev1+prev2;
          prev2= prev1;
          prev1=cur;
      }  
      return cur;
    }
};