#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string ans="";
    bool flag=false;
    for (int i=0; i<strs[0].size(); ++i){
        for(int j=1; j<strs.size(); ++j){
            if (strs[j].size()>i){
                if(strs[j][i]!=strs[0][i]){
                    flag = true;
                    break;
                }
                
            }
            else{
                flag = true;
                break;
            }
        }
        if (flag) break;
        else ans.push_back(strs[0][i]);
    }
    return ans;
}
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string ans=longestCommonPrefix(strs);
    cout<<ans<<endl;
    return 0;
}