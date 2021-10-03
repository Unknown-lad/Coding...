#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int mid;
        if(sizeOfStack%2==0)
            mid=(sizeOfStack/2);
        else
            mid = (sizeOfStack/2)+1;

        stack<int> st;
        for(int i=0;i<sizeOfStack;i++){
            st.push(s.top());
            s.pop();
        }
        
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
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