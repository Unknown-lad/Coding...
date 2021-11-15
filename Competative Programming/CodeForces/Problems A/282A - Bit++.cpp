#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int v2=0;
    string str;

    while(t--){
        
        cin>>str;
        
        if(str[1]=='+'){
            ++v2;
        }
        else{
            --v2;
        }
    }
    cout<<v2<<endl;
}