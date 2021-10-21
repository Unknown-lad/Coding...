#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int smallestSubWithSum(int arr[], int n, int x){
        
        int count=0;

        //not done by me but I have to ask it to sir how it's o(n)?
        int swin=0,min=INT_MAX,sum=0,wins;

        for(int ewin=0;ewin<n;ewin++){
            sum+=arr[ewin];

            while(sum>x){

                wins=ewin-swin+1;

                if(wins<min){
                    min=wins;
                }
                sum-=arr[swin];
                swin++;
            }
        }
        return min;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution obj;
        cout<<obj.smallestSubWithSum(a,n,x)<<endl;
    }
    return 0;
}