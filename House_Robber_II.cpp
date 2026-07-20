#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>& nums, int i, int end, vector<int> &memo){
    if(i>end) return 0;
    if(memo[i]!=-1) return memo[i];
    int rob=nums[i]+solve(nums,i+2,end,memo);
    int skip=solve(nums,i+1,end, memo);
    return memo[i]=max(rob,skip);
}
int rob(vector<int>& nums) {
    // if(nums.size()==1) return nums[0];
    vector<int> memo1(nums.size()+1,-1);
    vector<int> memo2(nums.size()+1,-1); 
    return max(solve(nums,0,nums.size()-2,memo1),solve(nums,1,nums.size()-1,memo2));
}

int main(){
    vector<int> v={3,2};
    cout<<rob(v)<<endl;
    return 0;
}