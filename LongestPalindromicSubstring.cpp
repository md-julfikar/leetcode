#include<bits/stdc++.h>
using namespace std;
int expand_around_center(const string &s, int l, int r){
    while(l>=0 && r<s.size() && s[l]==s[r]){
        --l;
        ++r;
    }
    return r-l-1;
}
string longestPalindrome(string s) {
    int  n=s.length();
    int st=0, ed=0;
    for(int i=0; i<n; ++i){
        int l1=expand_around_center(s,i,i);
        int l2=expand_around_center(s,i,i+1);
        int maxl=max(l1,l2);
        if(maxl>ed-st){
            st=i-(maxl-1)/2;
            ed=i+maxl/2;
        }
    }
    return s.substr(st,ed-st+1);
}
int main()
{
    string s= "baad";
    cout<<longestPalindrome(s)<<endl;
    return 0;
}