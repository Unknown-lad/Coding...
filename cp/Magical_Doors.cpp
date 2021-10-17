#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    string s;
    cin>>s;

    int c=0;
    for(int i=s.length();i>=0;i--){
        if(s[i]==s[i-1]){
            cout<<"0"<<endl;
        }
        else{
            if(s[i]!=s[i-1]){
                
            }
        }
    }
}
return 0;
}