#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,sum=0,c=0;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)   {
        cin>>arr[i];
    }
    
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        if(arr[i]==0)
        arr[i]=-1;
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0)
            c++;
        if(m[sum])
            c+=m[sum];

        m[sum]++;
    }
    cout<<c;
}