#include <bits/stdc++.h>
using namespace std;

string wordreverse(string s){

    string word = "",res="";
    vector<string> v;
    for (auto x : s) 
    {
        if (x == '.')
        {
            v.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    v.push_back(word);

    reverse(v.begin(),v.end());
    for(auto i : v){
        res+=i+".";
    }
    res.pop_back();
    return res;
}

int main(){

    string s;
    cin>>s;

    cout<<wordreverse(s);
}