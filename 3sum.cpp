#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]>0) break;
        if( i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1, k=nums.size()-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                ++j, --k;
                while(j<k && nums[j]==nums[j-1]) ++j;
                while(j<k && nums[k]==nums[k+1]) --k;
            }
            
            if(nums[i]+nums[j]+nums[k]<0){
                ++j;
            }
            else if(nums[i]+nums[j]+nums[k]>0){
                --k;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> testcase={-1,0,1,2,-1,-4};  //ans {[-1,-1,2],[-1,0,1]}
    vector<vector<int>> ans=threeSum(testcase);
    for(auto x: ans){
        for (auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}