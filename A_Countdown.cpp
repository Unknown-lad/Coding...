#include <iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    int nt;
    long long tt;
    cin>>nt;
    cin>>tt;

    cout<<nt<<" "<<tt;

    int n,sum=0;
    while(tt!=0){
      tt=tt/10;
      n=t%10;

      sum=sum+n;
    }
    cout<<" "<<sum<<endl;
  }
}