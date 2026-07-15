#include<bits/stdc++.h>
using namespace std;

int minSubarray(vector<int>& nums, int p) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0) % p;
    if (totalSum == 0) return 0;

    unordered_map<int, int> prefixSumIndex;
    prefixSumIndex[0] = -1;
    int currentSum = 0, minLength = n;

    for (int i = 0; i < n; ++i) {
        currentSum = (currentSum + nums[i]) % p;
        int target = (currentSum - totalSum + p) % p;
        if (prefixSumIndex.find(target) != prefixSumIndex.end()) {
            minLength = min(minLength, i - prefixSumIndex[target]);
        }
        prefixSumIndex[currentSum] = i;
    }

    return minLength == n ? -1 : minLength;
}

int main() {
    vector<int> a = {3, 1, 4, 2};
    cout << minSubarray(a, 6) << endl;
    return 0;
}