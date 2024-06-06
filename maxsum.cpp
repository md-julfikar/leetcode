#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int cs=0, maxsum=INT_MIN;
        for(int i=0; i<nums.size(); ++i){
            cs=max(nums[i],cs+nums[i]);
            maxsum=max(maxsum,cs);
        }
        return maxsum;
}
int main()
{
    vector<int> a={5,4,-1,7,8,-1,-2,10};
    cout<<maxSubArray(a);
     return 0;
}