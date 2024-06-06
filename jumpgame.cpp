#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>& nums, int i){
    if(i+nums[i]>=nums.size()-1){
        return true;
    }
    int ans=INT_MIN;
    for(int j=1; j<=nums[i]; j++){
        ans=max(ans,)
    }

}
bool canJump(vector<int>& nums){
    int dp[int(10e4+10)];
    memset(dp,-1,sizeof(dp));
    return solve(nums,0);
}
int main()
{
    vector<int> a={3,2,1,0,4};
    cout<<canJump(a);
    return 0;
}