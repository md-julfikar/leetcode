#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>& nums, int target){
    int left=0, right=nums.size()-1;
    int ans=-1;
    while(left<=right){
        int mid= left + (right-left)/2;
        if(nums[mid]>=target){
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return ans;
}
int upper_bound(vector<int>& nums, int target){
    int left=0, right=nums.size()-1;
    int ans=nums.size();
    while(left<=right){
        int mid= left + (right-left)/2;
        if(nums[mid]>target){
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {
    int start=lower_bound(nums, target);
    int end= upper_bound(nums, target)-1;
    if(start==-1 || nums[start]!=target){
        return {-1, -1};
    }
    else return {start, end};
}
int main()
{
    vector <int> arr={5,7,7,8,8,10};
    vector<int> ans=searchRange(arr,8);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}