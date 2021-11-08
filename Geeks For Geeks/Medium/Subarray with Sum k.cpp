#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k,c=0;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> m;

    int sum=0,count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==k){
            count++;
        }

        if(m.find(sum-k)!=m.end()){
            count+=(m[sum-k]);
        }

        m[sum]++;
    }

    cout<<count<<endl;
    
    return 0;
}