#include <iostream>
using namespace std;

int main(){

    int n,m,c=0;
    cin>>n>>m;

    for(int a=0;a<1000;a++){
        for(int b=0;b<1000;b++){
            if(a*a+b==n and b*b+a==m){
                c++;
            }
        }
    }

    cout<<c;
return 0;
}