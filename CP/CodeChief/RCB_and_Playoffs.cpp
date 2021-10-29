#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int c_pt,p_pt,g_l;
    cin>>c_pt>>p_pt>>g_l;

    if(c_pt+g_l*2>=p_pt){
      cout<<"YES"<<endl;
    }
    else if(c_pt+g_l*2<p_pt){
      cout<<"NO"<<endl;
    }
}
return 0;
}