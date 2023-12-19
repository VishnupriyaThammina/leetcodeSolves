class Solution {
public:
int dpFib(int n , vector<int> & dp){
if(n==0||n==1){
    return n;
}if(dp[n]!=-1){
    return dp[n];
}
dp[n]=dpFib(n-1,dp)+dpFib(n-2,dp);
return dp[n];
}

    int fib(int n) {
       // declaring my 1st ever dp array
   vector<int> dp(n+1,-1);
       return dpFib(n,dp); 
    }
};