#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    if(s.empty()) return 0;
    vector<int> dp(256,-1);
    int ans=INT_MIN;
    int l=0;
    for(int i=0; i<s.size(); ++i){
        if(dp[s[i]]>=l){
            l=dp[s[i]]+1;
        }
        
        dp[s[i]]=i;
        ans=max(ans,i-l+1);
    }
        
    return ans;
}
int main()
{
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
}