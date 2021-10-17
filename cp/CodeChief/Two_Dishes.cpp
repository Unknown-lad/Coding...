#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int nt,fts,vgs,fsh;

    cin>>nt>>fts>>vgs>>fsh;

    int c=0;
    for(int i=0;i<nt;i++){
        if(fts>0 and vgs>0){
            c++;fts--;vgs--;
        }
        if(vgs>0 and fsh>0){
            c++;vgs--;fsh--;
        }
    }
    
    if(nt<=c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
return 0;
}