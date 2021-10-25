#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int x,y;
    cin>>x>>y;

    string str;
    cin>>str;

    str+='0';

    int init=0,cnt=0,cur=0,max=0;
    for(int i=0;i<=str.length();i++){
        if(str[i]=='1'){
            init+=(str[i]-'0')*x;
            cnt++;    
        }
        if(str[i]=='0'){
            cur=cnt;
            cnt=0;
            if(max<cur){
                max=cur;
            }
        }
    }
    int init2=max*y;
    cout<<init+init2<<endl;
}
return 0;
}