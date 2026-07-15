#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int j=0;
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]>nums[j]){
            nums[++j]=nums[i];
        }
    }
   
    return j+1;
}
int main()
{
    vector<int> a={0,0,1,1,1,2,2,3,3,4}; 
    
}