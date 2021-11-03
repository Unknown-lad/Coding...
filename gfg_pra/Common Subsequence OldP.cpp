#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    unordered_set<char> s,ss;
    unordered_map<char,int> m;

    for(int i=0;i<s1.length();i++){
        s.insert(s1[i]);
    }

    for(int i=0;i<s2.length();i++){
        ss.insert(s2[i]);
    }

    for(auto i : s){
        m[i]++;
    }

    for(auto j : ss){
        m[j]++;
    }

    bool t;
    for(auto k : m){
        if(k.second>1){
            t=true;
        }
    }

    if(t)
    cout<<"1";
    else
    cout<<"0";
    
    return 0;
}