#include<bits/stdc++.h>
using namespace std;
int solve(const vector <int> nums, int i)
{   
    if(i+nums[i]>=nums.size()-1) return 1;
    int mx=INT_MIN;
    int cur=0;
    for(int j=1; j<=nums[i]; j++)
    {
        if(i+j<nums.size()&&nums[i+j]+j>mx){
            mx=nums[j+i]+j;
            cur=i+j;
        }
    }
    return 1+solve(nums,cur);
}
int jump(vector <int> nums){
    if(nums.size()<2){
        return 0;
    }
    return solve(nums,0);
}

int main()
{
    vector<int> a={10,9,8,7,6,5,4,3,2,1,1,0};
    cout<<jump(a);
    return 0;
}