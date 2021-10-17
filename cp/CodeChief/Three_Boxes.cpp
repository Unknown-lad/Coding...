#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int bg1,bg2,bg3,tot;

    cin>>bg1>>bg2>>bg3>>tot;

    if(bg1+bg2+bg3 <= tot){
        cout<<"1"<<endl;
    }
    else if(bg1+bg2 <= tot or bg2+bg3 <= tot or bg1+bg3 <= tot){
        cout<<"2"<<endl;
    }
    else{
        cout<<"3"<<endl;
    }
}
return 0;
}