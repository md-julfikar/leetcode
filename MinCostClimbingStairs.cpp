#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>& cost, int i, vector<int> &memo){
    if(i>=cost.size()) return 0;
    if(memo[i]!=-1) return memo[i];
    return memo[i]=cost[i]+min(solve(cost,i+1,memo),solve(cost,i+2,memo));
}

int minCostClimbingStairs(vector<int>& cost) {
    vector<int> memo(cost.size(),-1);
    return min(solve(cost,0,memo),solve(cost,1,memo));
}
int main(){
    vector<int> cost={10,15,20,7};
    cout<<minCostClimbingStairs(cost)<<endl;
    return 0;
}