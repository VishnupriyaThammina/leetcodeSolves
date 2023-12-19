class Solution {
public:
    int a(int n, vector<int> &dp) {
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]= a(n-1,dp)+a(n-2,dp);
        return dp[n];    
        }
       int climbStairs(int n) {

vector<int> dp(n+1,-1);
return a(n,dp);
       }
};