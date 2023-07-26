class Solution {
public:
    int solve(int target, int i, int size, vector<int>& coins,vector<vector<int>>& dp)
    {
        if(i==size)
        {
            if(target==0) return 0;
            return 1e9;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int nt=0+solve(target,i+1,size,coins,dp);
        int tk=INT_MAX;
        if(target>=coins[i])
        {
            tk=1+solve(target-coins[i],i,size,coins,dp);
        }
        return dp[i][target]=min(tk ,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        int size=coins.size();
        vector<vector<int>> dp(size+1,vector<int>(amount+1, -1));
        int ans=solve(amount, 0, coins.size(), coins,dp);
        if(ans>=1e9) return -1;
        else return ans;
    }
};