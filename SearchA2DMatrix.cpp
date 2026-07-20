#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(target<matrix[0][0] || target>matrix[matrix.size()-1][matrix[0].size()-1]) return false;
    int i=0, j=matrix.size()-1;
    while(i<=j){
        
        int mid=i+(j-i)/2;
        
        if(matrix[mid][0]<=target && matrix[mid][matrix[0].size()-1]>=target){
            
            int k=0, l=matrix[mid].size()-1;
            while(k<=l){
                
                int midc= k+ (l-k)/2;
                if(matrix[mid][midc]==target) return true;
                else if(matrix[mid][midc]>target){
                    l=midc-1;
                }
                else{
                    k=midc+1;
                }
            }
            return false;
        }
        else if(matrix[mid][0]>target){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix,16)<<endl;
    return 0;
}