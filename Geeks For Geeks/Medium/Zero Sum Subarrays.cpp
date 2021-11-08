#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        //O(n2)
        // int count=0;
        // for(ll i=0;i<n;i++){
        //     ll sum=0;
        //     for(ll j=i;j<n;j++){
        //         sum+=arr[j];

        //         if(sum==0){
        //             count++;
        //         }
        //     }
        // }

        //O(n)
        unordered_map<ll,ll> m;

        ll csum=0,count=0;

        for(ll i=0;i<n;i++){
            csum+=arr[i];

            if(csum==0){
                count++;
            }

            if(m.find(csum-0)!=m.end())
                count+=(m[csum-0]);
            m[csum]++;
        }

        return count;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
    return 0;
}