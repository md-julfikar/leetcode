#include<bits/stdc++.h>
using namespace std;
int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
    sort(processorTime.begin(),processorTime.end());
    sort(tasks.begin(),tasks.end());
    int j=tasks.size()-1;
    long long ans=0;
    for(int i=0; i<processorTime.size(); ++i){
        ans=max(processorTime[i]+tasks[j]+0ll,ans);
        j-=4;
    }
    return ans;
}
int main()
{
    vector <int>  processorTime = {10,20},tasks = {2,3,1,2,5,8,4,3};
    cout<<minProcessingTime(processorTime,tasks)<<endl;
    return 0;
}