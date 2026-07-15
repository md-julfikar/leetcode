#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int max_profit=0, buy_price=INT_MAX, profit=0;
    for(int i=0; i<prices.size(); ++i){
        buy_price=min(buy_price,prices[i]);
        profit= max(profit,prices[i]-buy_price);
        max_profit=max(max_profit,profit);
    }
    return max_profit;
}
int main()
{
    vector<int> v={7,6,4,3,1};
    cout<<maxProfit(v)<<endl;
    return 0;
}