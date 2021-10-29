#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int n,x,p;
    cin>>n>>x>>p;

    int left= n-x;
    int scr = x*3-left;
    if(scr>=p){
        cout<<"PASS"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }

}
return 0;
}