#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    unordered_map<char,int> m;
    //correct for more test case :(
    // string s="";
    // for(long long i=0;i<str.length();i++){
    //     m[str[i]]++;
    //     auto it = m.find(str[i]);

    //     if(it->second==2){
    //         s+=it->first;
    //     }
    // }
    // for(long long i=0;i<str.length();i++){
    //     str.erase(remove(str.begin(), str.end(), s[i]), str.end());
    // }

    for(auto i : str){
        m[i]++;
    }
    for(auto i : str){
        if(m[i]==1){
            cout<<i;
            break;
        }
    }
}