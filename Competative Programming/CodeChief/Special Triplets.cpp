#include <iostream>
using namespace std;

int main(){
        
        int t;
        cin>>t;

        while(t--){
        int n,c=0;
        cin>>n;

        for(int a=1;a<=n;a++){
            for(int b=a;b<=n;b=b+a){
                if(b%a==0){
                    for(int c=b;c<=n;c=c+b){
                        if(c%b==a){
                            c++;
                        }
                    }
                }
            }
        }

        cout<<c<<endl;
        }
        return 0;
}