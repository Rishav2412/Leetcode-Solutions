class Solution {
public:
 
    int solve(int target, int i, int size, vector<int>& coins,vector<vector<int>>& dp)
    {
        if(i==size)
        {
            if(target==0) return 1;
            return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int nt=0+solve(target,i+1,size,coins,dp);
        int tk=0;
        if(target>=coins[i])
        {
            tk=solve(target-coins[i],i,size,coins,dp);
        }
        return dp[i][target]=(tk+nt);
    }
    
   

    int change(int amount, vector<int>& coins) {
        int size=coins.size();
        vector<vector<int>> dp(size+1,vector<int>(amount+1, -1));
        int ans=solve(amount, 0, coins.size(), coins,dp);
        if(ans==0) return 0;
        else return ans;
    }
};