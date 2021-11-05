#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,x,l=4,c=0;
    cin>>n>>x;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n<l){
        cout<<"0";
    }
    else{
        int max_=0;
        for(int i=0;i<l;i++){
            max_+=arr[i];
        }

        if(max_==x){
            cout<<"1";
        }
        else{
            int wsum=max_;
        
            for(int i=l;i<n;i++){
                wsum+=arr[i]-arr[i-l];
                if(wsum==x){
                    cout<<"1";
                }
                
            }
        }
    }
    // cout<<c<<endl;
    
}