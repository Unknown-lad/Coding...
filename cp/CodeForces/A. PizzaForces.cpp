#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        //Most Optimal Way:-
        // long long a,t,r,n;
        // cin>>n;

        // a=n/6;
        // r=n%6;

        // if(n<=6)
        //     t=15;
        // else if(r==0)
        //     t=a*15;
        // else if(r!=0 && r<=2)
        //     t=a*15+5;
        // else if(r!=0 && r<=4)
        //     t=a*15+10;
        // else
        //     t=(a+1)*15;
        // cout<<t<<"\n";


        long long lads,sm=6,md=8,lg=10,smt=15,mdt=20,lgt=25,res,r,s;
        cin>>lads;

        if(lads<=sm){
            cout<<smt<<endl;
        }
        else if(lads>sm && lads%sm==0){
            r=lads/sm;

            res = smt*r;
            cout<<res<<endl;
        }
        else if(lads>=md && lads%md==0){
            r=lads/md;

            res = mdt*r;
            cout<<res<<endl;
        }
        else if(lads>=lg && lads%lg==0){
            r=lads/lg;

            res = lgt*r;
            cout<<res<<endl;
        }
        else if(lads>lg){
            s=lads%10;
            r=lads/10;
            
            if(r<=6){

                res = r*lg+s*sm;
                cout<<res<<endl;
            }
            else if(r<6 && r>=8){

                res = r*lg+s*md;
                cout<<res<<endl;
            }
            else if(r<8 && r>=9){

                res = r*lg+s*lg;
                cout<<res<<endl;
            }
        }
    }
}