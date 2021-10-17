#include <iostream>
using namespace std;

class Solution{
    public:
    int equilibriumPoint(long long arr[], int n) {
        if(n==1)return 1;

        long long add=0;
        for(long long i=0;i<n;i++){
            add+=arr[i];
        }

        long long csum=0,half=add/2,pos=0;
        for(long long i=0;i<n;i++){
            csum+=arr[i];
            if(csum<half)
                pos=i;
        }

        long long lsum=0;
        for(long long i=0;i<=pos;i++){
            lsum+=arr[i];
        }

        long long rsum=0;
        for(long long i=pos+2;i<n;i++){
            rsum+=arr[i];
        }
        
        if(lsum==rsum) 
            return pos+2;
        else
            return -1;
    }
};

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
