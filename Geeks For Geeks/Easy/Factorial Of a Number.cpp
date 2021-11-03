#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long factorial(int N) {
        long long i=1,res=1;

        while(i!=N+1){
            res=res*i;
            i++;
        }
        return res;
    }
};

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}