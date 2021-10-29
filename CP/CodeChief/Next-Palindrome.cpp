// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	
	int t;
	cin>>t;

	while(t--){
		int k,lim=1000000;
		int val=0;
        cin>>k;

        for(int i=k+1;i<lim;i++){
        	string s = to_string(i);

        	reverse(s.begin(), s.end());

        	int res = stoi(s);

        	if(i==res){
        		val=i;
        		break;
        	}
        }
        cout<<val<<endl;
	}

	return 0;
}