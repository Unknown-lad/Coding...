#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int arr[10000];
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        arr[i]=val;
    }

    int c=0;
    for (int j = 1; j <= n; j++) {
        if (arr[j] >= arr[k] && arr[j] > 0) {
            c++;
        }
    }
    cout<<c;

    return 0;
}