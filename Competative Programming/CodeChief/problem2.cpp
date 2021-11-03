#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int aooo,bbbbb,ddd;
		cin>>aooo>>bbbbb>>ddd;

		if(aooo<bbbbb && aooo<ddd){
			cout<<"Draw"<<endl;
		}
		else if(bbbbb<aooo && bbbbb<ddd){
			cout<<"Bob"<<endl;
		}
		else if(ddd<aooo && ddd<bbbbb){
			cout<<"Alice"<<endl;
		}
	}
}