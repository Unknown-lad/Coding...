#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    std::vector<char> v;
    cin>>str;

    for(int i=0;i<str.length();i++){
        if(str[i]<92){
            str[i]=str[i]+32;
        }
    }

    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    str.erase(remove(str.begin(), str.end(), 'o'), str.end());
    str.erase(remove(str.begin(), str.end(), 'y'), str.end());
    str.erase(remove(str.begin(), str.end(), 'e'), str.end());
    str.erase(remove(str.begin(), str.end(), 'u'), str.end());
    str.erase(remove(str.begin(), str.end(), 'i'), str.end());

    for(int i=0;i<str.length();i++){
        v.push_back(str[i]);
    }

    string s=" ";
    for(auto i : v){
        // cout<<'.'<<i<<endl;
        s+='.';
        s+=i;
    }

    cout<<s<<endl;
}
