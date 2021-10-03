#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int aaaa;
    int bbbb;
    cin>>aaaa>>bbbb;

    if(aaaa>0 and bbbb>0){
	cout<<"Solution"<<endl;
	}
    else if(bbbb==0){
    cout<<"Solid"<<endl;
    }
    else if(aaaa==0){
    cout<<"Liquid"<<endl;
    }
}
return 0;
}
