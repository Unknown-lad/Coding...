#include <iostream>
using namespace std;

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
    }

};

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}