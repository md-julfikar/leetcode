#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    vector<int>oc(1,1);
    sort(arr.begin(),arr.end());
    for(int i=1; i<arr.size(); ++i){
        if(arr[i]==arr[i-1]){
            oc[oc.size()-1]++;
        }
        else{
            oc.push_back(1);
        }
    }
    int m=*max_element(oc.begin(),oc.end());
    vector<bool>cdp(m,true);
    for(int x:oc){
        if(cdp[x-1]){
            cdp[x-1]=false;
        }
        else{
            return false;
        }
    }
        return true;
}
int main()
{
    vector<int> arr={1,2};
    cout<<uniqueOccurrences(arr);
    
    return 0;
}