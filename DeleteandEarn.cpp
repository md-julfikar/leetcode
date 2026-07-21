#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int solve(vector<int> &unique_nums,unordered_map <int,int> &mp,int i, vector<int> &memo){
    if(i>=unique_nums.size()) return 0;
    if(memo[i]!=-1) return memo[i];
    int next=0;
    if(i<unique_nums.size()-1) next=unique_nums[i+1];
    int points= unique_nums[i]*mp[unique_nums[i]];
    int take=0, skip=0;
    if(unique_nums[i]+1==next){
        take=points+solve(unique_nums,mp,i+2,memo);
    }
    else{
        take=points+solve(unique_nums,mp,i+1,memo);
    }
    skip=solve(unique_nums,mp,i+1,memo);
    return memo[i]= max(take,skip);
}
int deleteAndEarn(vector<int>& nums) {
    unordered_map <int,int> mp;
    for(int x:nums){
        mp[x]++;
    }
    sort(nums.begin(),nums.end());
    vector<int> unique_nums(mp.size());
    int j=0;
    unique_nums[j++]=nums[0];
    for(int i=1; i<nums.size(); ++i){
        if(nums[i]!=nums[i-1]){
            unique_nums[j++]=nums[i];
        }
    }

    vector<int> memo(mp.size()+1,-1);
    
    return solve(unique_nums,mp,0,memo);
}

int main(){
    vector<int> nums={3,4,2};
    cout<<deleteAndEarn(nums)<<endl;
    return 0;
}