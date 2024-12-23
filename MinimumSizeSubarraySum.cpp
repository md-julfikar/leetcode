#include<bits/stdc++.h>
using namespace std;
int BF_minSubArrayLen(int target, vector<int>& nums) {
    int n=nums.size();
    int ans=INT_MAX;
    for(int i=0; i<n; ++i){
        long long cs=0;
        for(int j=i; j<n; ++j){
            cs+=nums[j];
            if(cs>=target){
                ans=min(ans,j-i+1);
            }
        }
    }
    return ans==INT_MAX?0:ans;
}
int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int ans = INT_MAX;
    int left = 0;
    long long cs = 0;
    for (int right = 0; right < n; ++right) {
        cs += nums[right];
        while (cs >= target) {
            ans = min(ans, right - left + 1);
            cs -= nums[left++];
        }
    }
    
    return ans == INT_MAX ? 0 : ans;
}
int main(){
    vector<int> a={1,1,1,1,1,1,1,1};
    cout<<BF_minSubArrayLen(11,a)<<endl;
    cout <<minSubArrayLen(11, a) << endl;
}