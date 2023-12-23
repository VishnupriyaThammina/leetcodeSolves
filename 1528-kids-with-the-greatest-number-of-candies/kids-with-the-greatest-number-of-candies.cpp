class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size(),0);
        int maxi  = INT_MIN;
        for(int i = 0; i < candies.size();i++){
            maxi = max(candies[i],maxi);
        }
    for(int i = 0;i<candies.size();i++){
        if(maxi<=candies[i]+extraCandies){
            res[i]=1;
        }
    }
    return res;
    }
};