#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    map<char,char> mp;
    mp[')']='(';
    mp['}']='{';
    mp[']']='[';
    stack<char> st;
    for(char x: s){
        if(x=='('||x=='{'||x=='['){
            st.push(x);
        }
        else if(x==')' || x=='}' || x==']'){
            if(st.empty() || st.top() != mp[x]){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string  s = "((([])))";
    cout<<isValid(s)<<endl;
    return 0;
}