#include<bits/stdc++.h>
using namespace std;
int dfs(vector<int> nums, int index,int dp[]) {
    if(index<0) return 0;
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int robe=nums[index]+dfs(nums, index-2, dp);
    int not_rob=dfs(nums,index-1,dp);
    dp[index]= max(robe, not_rob);
    return dp[index];
}
int rob(vector<int>& nums) {
        int n=nums.size();
        int *dp = new int[n];
        for(int i=0; i<n; i++)
        {
            dp[i]=-1;
        }
        return dfs(nums,n-1,dp);
    }
int main()
{
    vector<int> v={1,2,3,1};
    cout<<rob(v);
    return 0;
}