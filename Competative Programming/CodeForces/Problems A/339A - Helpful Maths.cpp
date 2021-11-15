#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string str="";
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            str+=s[i];
        }
    }
    sort(str.begin(),str.end());

    // string ss="";
    for(int i=0;i<str.length()-1;i++){
        cout<<str[i]<<"+";
    }
    cout<<str[str.length()-1];
}
