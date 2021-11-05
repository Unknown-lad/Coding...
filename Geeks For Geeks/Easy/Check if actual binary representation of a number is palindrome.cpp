#include <bits/stdc++.h>
using namespace std;

int main(){

    int  n,res=0,j=0;
    cin>>n;

    string s="",s2="";
    while(n!=0){
        res=n%2;
        n=n/2;
        s+='0'+res;
    }
    s2=s;
    reverse(s2.begin(),s2.end());
    if(s==s2){
        cout<<"1";
    }else{
        cout<<"0";
    }
}