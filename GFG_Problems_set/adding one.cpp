#include <iostream>
using namespace std;

class Solution{
    public:
    void update(int arr[],int n,int updates[],int k) {

        for(int i=0;i<k;i++){
            arr[updates[i]-1]++;
        }

        for(int i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
    }
};

int main() {

    long long t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[n]={0},updates[k]={0};
        for(int i=0;i<k;i++)
            cin>>updates[i];
        Solution ob;
        ob.update(a,n,updates,k);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";


        cout<<endl;
    }
    return 0;
}