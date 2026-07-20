#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> memo(38,-1);
int tribonacci(int n) {
    if(n<=1) return n;
    if(n==2) return 1;
    if (memo[n]!=-1) return memo[n];
    return memo[n]= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3); 
}

int main(){
    int n = 37;
    cout<<tribonacci(n)<<endl;
}