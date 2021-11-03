#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int n)
    {
        // your code here
        unordered_map<int, int> m;

        for(int i=0;i<n;i++){
        	m[a[i]]++;
        }

        int res = 0;
        for(auto val : m){
        	if(val.second>res){
        		return val.first;
        	}
        }

        return -1;
    }
};

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
        cin >> n;
        int a[n];
        
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        cout << obj.majorityElement(a, n) << endl;
	}
}