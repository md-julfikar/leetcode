#include<bits/stdc++.h>
using namespace std;
int helper(int amount, const vector<int>& coins, int dp[]){
    if(amount==0){
        return 0;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int ans=INT_MAX;
    for(int coin:coins){
        if(amount-coin>=0)
        ans= min(ans+0ll, helper(amount-coin,coins,dp)+1ll);
    }
    return dp[amount]=ans;
}


int coinChange(vector<int>& coins, int amount) {
    int dp[amount+1];
    memset(dp,-1,sizeof(dp));
    int ans=helper(amount,coins,dp);
    return ans==INT_MAX?-1:ans;
    }
int main()
{
    vector<int> coins={2};
    cout<<endl<<coinChange(coins,3)<<endl;
    return 0;
}