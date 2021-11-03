#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,e,m,j=0,tot=0;
        cin>>n>>k>>e>>m;

        int sub,alltot[n];

        for(int i=0;i<n;i++){
            for(int j=0;j<e;j++){
                cin>>sub;
                tot+=sub;
                cout<<tot<<" ";
            }
            
            cout<<endl;
            tot=0;
        }
    }

return 0;
}