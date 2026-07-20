#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s) {
    string s1(s.size(),' ');
    int j=0;
    for(int i=0; i<s.size(); ++i){
        if(isalpha(s[i])){
           s1[j++] =tolower(s[i]);
        }
        else if(isdigit(s[i])){
            s1[j++]=s[i];
        }
    }
    for(int i=0; i<j; ++i){
        if(s1[i]!=s1[j-i-1]){
            return false;
        }
    }
    return true;
}
int main(){

    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;
    return 0;
}