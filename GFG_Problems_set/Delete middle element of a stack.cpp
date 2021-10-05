#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int mid;
        if(sizeOfStack%2==0){
            mid=(sizeOfStack/2);
        }else{
            mid = (sizeOfStack/2)+1;
        }

        int arr[sizeOfStack];
        for(int i=sizeOfStack-1;i>=0;i--){
            arr[i]=s.top();
            s.pop();
        }
        
        // cout<<arr[mid-1]<<endl;
        for(int i=mid-1;i<sizeOfStack;i++){
            arr[i]=arr[i+1];
        }

        // for(int i=0;i<sizeOfStack-1;i++)
        // cout<<arr[i]<<" ";
        for(int i=0;i<sizeOfStack-1;i++){
            s.push(arr[i]);
        }
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}