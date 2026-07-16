#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   int i=m-1, j=n-1, k=m+n-1;
   while(i>=0 && j>=0){
    if(nums1[i]>nums2[j]){
        nums1[k--]=nums1[i--];
    }
    else{
        nums1[k--]=nums2[j--];
    }
   }
   while(j>=0){
    nums1[k--]=nums2[j--];
   }
}
int main()
{
    vector<int> arr1={1,2,3,0,0,0}, arr2={2,5,6};
    merge(arr1,arr1.size()-arr2.size(),arr2,arr2.size());
    for(int i=0; i<arr1.size(); ++i){
        cout<<arr1[i]<<" ";
    }
    return 0;
}