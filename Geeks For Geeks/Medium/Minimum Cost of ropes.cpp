#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long> que;

        for(long long i=0;i<n;i++){
            que.push(-arr[i]);
        }


        long long sum=0,a=0,b=0,ans=0;
        while(que.size()>=2){
            a=que.top();
            que.pop();
            b=que.top();
            que.pop();

            sum=a+b;
            que.push(sum);

            ans+=sum;
        }

        return -ans;
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}