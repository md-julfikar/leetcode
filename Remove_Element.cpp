#include<bits/stdc++.h>
using namespace std;
vector<int> removeElement(vector<int>& nums, int val) {
    deque<int> q;
    int c=0;
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]==val){
            ++c;
            q.push_back(i);
        }
        else if(!q.empty()){
            nums[q.front()]=nums[i];
            q.pop_front();
        }
    }
    return nums;
        
    }
int main()
{   vector<int> a={0,1,2,2,3,0,4,2};
    for(int x:removeElement(a,2)){
        cout<<x<<" ";
    }
    return 0;
}