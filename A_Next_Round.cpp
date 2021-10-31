#include <bits/stdc++.h>
using namespace std;

int main(){

    int ll,kk,sum=0,c=0;
    cin>>ll>>kk;

    map<int,int> m;
    for(int i=0;i<m.size();i++){
        int val;
        cin>>val;
        m[val]++;
        sum+=val;
    }

    if(sum==0){
        cout<<"0"<<endl;
    }

    for(auto v : m){
        int tot=0;
       tot+=v.second;
       if(kk==tot){
           cout<<v.first;
       }
    }

    return 0;
}