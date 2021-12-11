#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,pos;cin>>n>>pos;

    int arr[n],narr[pos];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // for(int i=0;i<n;i++){
    //     if(i<pos){
    //         narr[i]=arr[i];
    //     }
    //     arr[i]=arr[i+pos];
    // }
    // int j=0;
    // for(int i=pos+1;i<n;i++){
    //     arr[i]=narr[j++];
    // }

    reverse(arr,arr+n);
    reverse(arr+n-pos,arr+n);
    reverse(arr,arr+n-pos);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}