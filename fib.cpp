#include<bits/stdc++.h>
using namespace std;
int dfs(int n, int dp[])
{
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int left= dfs(n-1,dp);
    int right= dfs(n-2,dp);
    dp[n]=left+right;
    return dp[n];
}
int fib(int n)
{
    if(n==0||n==1) return n;
    int *dp=new int[n+1];
    for(int i=0; i<n+1; i++)
    {
        dp[i]=-1;
    }
    dp[0]=0;
    dp[1]=1;
    delete[] dp;
    int result=dfs(n,dp);
    return result;
}
int main()
{
    cout<<fib(10);
    return 0;
}