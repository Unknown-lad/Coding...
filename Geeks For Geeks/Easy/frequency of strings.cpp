#include <bits/stdc++.h>
using namespace std;

/*Given N strings, print distinct strings 
in lexiographical order with their,frequency 
N <= 10^5
*/

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		map<string, int> m;

		//find() -> to find any key form the list
		//erase() -> the key which is given it deletes both key and value

		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			m[str]++;
		}

		for(auto &val : m){
		cout<<val.first<<" "<<val.second<<endl;
		}
	}
	return 0;
}