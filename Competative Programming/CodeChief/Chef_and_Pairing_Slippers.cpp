#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int tot,slp,cost;
    cin>>tot>>slp>>cost;

    if(cost<=0){
        cout<<"0"<<endl;
    }
    else if(tot<=0 or slp<=0){
        cout<<"0"<<endl;
    }
    else if(tot>=0 and slp>=0){
        int lim = tot-slp;
        if(slp>tot/2){    
            cout<<lim*cost<<endl;
        }
        else if(slp<=tot/2 and slp<=lim){
            cout<<slp*cost<<endl;
        }
    }
}
return 0;
}