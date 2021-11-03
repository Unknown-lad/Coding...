#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int n = s.length(),tot=0,c=0;
    
    for(int i=0;i<n;i++){
        if(s[i]>='0' and s[i]<='9'){
            tot+=s[i]-'0';
            c++;
        }
    }
    string str2 = to_string(tot);
    string str;
    sort(s.begin(),s.end());
    for(int i=c;i<n;i++){
        str+=s[i];
    }
    string st = str+str2;

    cout<<st;

    return 0;
}