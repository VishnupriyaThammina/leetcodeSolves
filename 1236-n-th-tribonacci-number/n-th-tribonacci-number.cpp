class Solution {
public:
    int tribonacci(int n) {
        if(n==1||n==2) return 1;
        if(n==0) return 0;
        int curr = 0;
        int prev1=0;
        int prev2=1;
        int prev3 =1;
        for(int i = 3;i<=n;i++){
            curr =prev1+prev2+prev3;
            prev1=prev2;
            prev2=prev3;
            prev3=curr;
        }
    return curr;
    }
};