#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        string s;

        cin>>n;
        cin>>s;

        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                s[i]='L';
            }
            else if(s[i]=='R'){
                s[i]='R';
            }
            else if(s[i]=='U'){
                s[i]='D';
            }
            else if(s[i]=='D'){
                s[i]='U';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}