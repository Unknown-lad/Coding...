#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
  public:
    long long countSubarray(int n,vector<int> a,long long l,long long r) {
        int sum,count=0;
        for(ll i=0;i<n;i++){
            sum=0;
            for(ll j=i;j<n;j++){
                sum+=a[j];
                if(sum>=l and sum<=r){
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
} 