#include <bits/stdc++.h>
using namespace std;

class Sol{
    public:
    int minAdDiff(int arr[],int n){
        if(n<2){
            return 0;
        }

        int res = abs(arr[0]-arr[1]);
        for(long long i=2;i<n;i++){
            res = min(res,abs(arr[i]-arr[i-1]));
            res = min(res,abs(arr[0]-arr[n-1]));
        }

        return res;
    }
};

int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Sol ob;
    cout<<ob.minAdDiff(a,n)<<endl;
}
return 0;
}