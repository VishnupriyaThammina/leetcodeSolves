class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //step1 is creating a dp array
        int n = cost.size();
      
       int prev1=cost[0];
       int prev2=cost[1];
       int cur =0;
        for(int i=2;i<n;i++){
           cur=cost[i]+min(prev1,prev2);
           prev1=prev2;
           prev2=cur;

        }
        return min(prev1,prev2);
    }
};