#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int ftt,rng1,rng2;

    cin>>ftt>>rng1>>rng2;

    if(ftt>=rng1 && ftt<=rng2){
        cout<<"Take second dose now"<<endl;
    }
    else if(ftt>rng1 && ftt>rng2){
        cout<<"Too Late"<<endl;
    }
    else if(ftt>=ftt && ftt<rng2){
        cout<<"Too Early"<<endl;
    }
}
return 0;
}