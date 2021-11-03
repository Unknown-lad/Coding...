#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;

		vector<int> a(n);

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int m = *max_element(a.begin(), a.end());

		int ans=0;
		for(int i=k-1;i<n;i++)
			if(a[i]==m)
				ans+=n-i;

		cout<<ans<<endl;
	}
}