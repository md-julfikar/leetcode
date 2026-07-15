#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
    vector<int> values={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> symbol={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string ans="";
    int d=10;
    for(int i=0; i<values.size(); ++i){
        while(values[i]<=num){
            ans+=symbol[i];
            num-=values[i];
        }
    }
    return ans;
}
int main()
{
    cout<<intToRoman(1994)<<endl;
    
    return 0;
}