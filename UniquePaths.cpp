#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int solve(const int &m,const int &n, int row, int col,vector<vector<int>> &memo){
    if(row==m && col==n){
        return 1;
    }
    if(row>m || col>n) return 0;
    if(memo[row][col]!=-1) return memo[row][col];
    return memo[row][col]= solve(m,n,row+1,col,memo)+solve(m,n,row,col+1,memo);
}
int uniquePaths(int m, int n) {
    vector<vector<int>> memo(m+1,vector<int>(n+1,-1));
    return solve(m,n,1,1,memo);
}

int main(){
    cout<<uniquePaths(3,7)<<endl;
    return 0;
}