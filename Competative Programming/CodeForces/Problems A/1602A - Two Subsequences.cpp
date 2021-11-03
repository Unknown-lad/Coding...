#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){

        string s,a,b;
        cin>>s;
        int n =s.length(),pos=0;
        char min='z';

        for(int i=0;i<n;i++){
            if(s[i]<min){
                min=s[i];
                pos=i;
            }
            b+=s[i];
        }

        b.erase(pos,1);

        a+=min;

        cout<<a<<" "<<b<<endl;

    }
}