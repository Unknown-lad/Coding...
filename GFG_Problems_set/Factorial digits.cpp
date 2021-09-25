#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        double sum=1;
        for(int i=1;i<=N;i++){
            sum+=log10(i);
        }
        return (int)sum;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}