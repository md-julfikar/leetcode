#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,vector<int>> mp;
    for(int i=0; i<nums.size(); ++i){
        mp[nums[i]].push_back(i);
    }
    vector<int> ans;
    for(int i=0; i<nums.size(); ++i){
        if(mp.find(target-nums[i])!=mp.end()){
            if(target-nums[i]!=nums[i]){
                ans.push_back(mp[nums[i]][0]);
                ans.push_back(mp[target-nums[i]][0]);
                return ans;
            }
            if(target-nums[i]==nums[i] && mp[nums[i]].size()>1){
                ans.push_back(mp[nums[i]][0]);
                ans.push_back(mp[nums[i]][1]);
                return ans;
            }
        }
    }
    return ans;

}
int main()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> ans=twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}