#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
        if(n<=2) return n;
        int temp=0;
        int first=1, second=2;
        for(int i=3; i<=n; i++)
        {
            temp=first+second;
            first=second;
            second=temp;
        }
        return second;
    }
int main()
{
    cout<<climbStairs(5);
    return 0;
}