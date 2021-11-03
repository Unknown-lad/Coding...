#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> v;
        vector<int> v2;

        for(int i=0;i<n;i++){
            if(arr[i]>0){
                v.push_back(arr[i]);
            }
            if(arr[i]<0){
                v2.push_back(arr[i]);
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            arr[i]=v[i];
            c++;
        }
        for(int i=0;i<v2.size();i++){
            arr[c++]=v2[i];
        }
        
        cout<<endl;
    }
};

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}