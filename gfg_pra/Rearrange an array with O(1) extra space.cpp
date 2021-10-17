#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> v;

		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}

		vector<int> v2=v;

		for(int i=0;i<v.size();i++){
			v[i]=v2[v[i]];
		}

		for(auto &value : v){
			cout<<value<<" ";
		}
	}
	return 0;
}