#include <bits/stdc++.h>
using namespace std;

int main(){

    int k;
    string s;
    cin>>s>>k;

    unordered_map <char,int> m;
    vector<int> vec;

    for(auto i : s){
        m[i]++;
    }

    for(auto i : m){
        cout<<i.second<<" ";
    }

    return 0;
}