#include<bits/stdc++.h>
using namespace std;
void solver( vector<string> &ans, const vector<string> &keypad,
             const string &digits, int index, string currnt ){
    if(index==digits.length()){
        ans.push_back(currnt);
        return;
    }
    int digit=digits[index]-'0'-2;
    string cr=keypad[digit];
    for(char alp:cr){
        solver(ans,keypad,digits,index+1,currnt+alp);
    }
}
vector<string>letterCombinations(string digits) {
    vector<string>ans;
    if(digits.empty()){
        return ans;
    }
    vector<string> keypad={"abc", "def","ghi","jkl",
                           "mno","pqrs","tuv","wxyz"};
    solver(ans,keypad,digits,0,"");
    return ans;
}
int main() {
    vector<string> a=letterCombinations("63");
    for(string s:a){
        cout<<s<<endl;
    }
    return 0;
}