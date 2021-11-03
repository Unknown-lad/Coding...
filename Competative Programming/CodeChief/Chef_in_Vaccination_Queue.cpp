#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int a,pos,chi,eld;
    cin>>a>>pos>>chi>>eld;

    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int res=0,res1=0;
    for(int i=pos-1;i>=0;i--){
        if(arr[i]==1){
            res+=eld;
        }
        else if(arr[i]==0){
            res1+=chi;
        }
    }

    int tot=res+res1;
    cout<<tot<<endl;
}
return 0;
}