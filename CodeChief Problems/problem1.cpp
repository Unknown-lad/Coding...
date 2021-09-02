#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		
		int p,sss,kkk;
		cin>>p>>kkk>>sss;

		int o = sss-(p*p);

		int ans = o/(kkk-1);

		cout<<ans<<endl;
	}
}