#include <bits/stdc++.h>
using namespace std;

int main(){
    
    map<string,int> st;
    vector<string> v;
    string s;

    int j=0;
    for(int i=0;i<2;i++){
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        st[s]++;
    }

    string str=" ";
    for(auto i : st){
        v.push_back(i.first);
        j=i.second;
    }
    
    if(s==v[0] and j!=2)
        cout<<1<<endl;
    else if(j==2)
        cout<<0<<endl;
    else
        cout<<-1<<endl;
}