#include<bits/stdc++.h>
using namespace std;
long long gcdSum(vector<int>& nums) {
    vector<int> mx(nums.size(),0), prefixGcd(nums.size(),0);
    int max_till=0;
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]>max_till){
            max_till=nums[i];
        }
        mx[i]=max_till;
        prefixGcd[i]=gcd(mx[i],nums[i]);
    }
    sort(prefixGcd.begin(), prefixGcd.end());
    long long ans=0;
    for(int i=0; i<prefixGcd.size()/2; ++i){
        ans+=gcd(prefixGcd[i], prefixGcd[prefixGcd.size()-i-1]);
    }
    return ans;
}
int main()
{
    vector<int> nums = {2,6,4};
    cout<<gcdSum(nums)<<endl;
    return 0;
}