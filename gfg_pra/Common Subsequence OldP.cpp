#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    // unordered_set <int> st,st2;
    unordered_map <char,int> m;

    for(int i=0;i<s1.length();i++){
        m[s1[i]]++;
    }

    bool t;
    for(int i=0;i<s1.length();i++){

        // m[s2[i]]++;
        auto it = m.find(s1[i]);

        if(it->second==1){
            t=true;
        }
    }

    if(t)
        cout<<"1";
    else
        cout<<"0";

    return 0;
}