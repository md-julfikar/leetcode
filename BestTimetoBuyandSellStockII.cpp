#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
    int profit=0;
    for(int i=0; i<prices.size()-1; ++i){
        if(prices[i]<prices[i+1]){
            profit+=prices[i+1]-prices[i];
        }
    }
    return profit;
}
int main(){
    vector <int> prices= {7,6,4,3,1};
    cout<<maxProfit(prices)<<endl;
}
