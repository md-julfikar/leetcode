#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int ans = nums[0] + nums[1] + nums[2];
    int closest = abs(target - ans);

    for (int i = 0; i < n - 2; i++) {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (abs(target - sum) < closest) {
                closest = abs(target - sum);
                ans = sum;
            }

            if (sum < target)
                j++;
            else if (sum > target)
                k--;
            else
                return sum;
        }
    }

    return ans;
}
int main()
{
    vector<int> nums={0,0,0}; //ans =2
    cout<<threeSumClosest(nums,1)<<endl;
    return 0;
}