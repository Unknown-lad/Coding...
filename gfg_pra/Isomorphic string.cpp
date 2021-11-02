#include <bits/stdc++.h>
using namespace std;

string mapping(string s){
    unordered_map<char,int> m;

    string str="";
    for(auto i : s){
        m[i]++;
        str+=to_string(m[i]);
    }
    return str;
}
int main(){

    string s,ss;
    cin>>s>>ss;

    int len = s.size(),len2=ss.size();

    string str = mapping(ss);

    bool t;
    for(auto i : s){
        if(len==len2 and mapping(s)==str){
           t=true; 
        }
    }

    if(t){
        cout<<"1";
    }else{
        cout<<"0";
    }

    return 0;
}