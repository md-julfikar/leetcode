#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int j=0;
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main(){
    
    vector<int> nums={1,7,0,0,9,11,23,0,5};
    
    moveZeroes(nums);
    for(int i=0; i<nums.size(); ++i){
        cout<<nums[i]<<" ";
    }

    return 0;

}