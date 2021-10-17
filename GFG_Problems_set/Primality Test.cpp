#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPrime(int n)
    {
        //Your code here
        if(n==2)
            return 1;
        if(n==1)
            return 0;

        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
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
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}