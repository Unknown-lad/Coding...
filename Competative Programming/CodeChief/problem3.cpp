#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int m,l;
		cin>>m>>l;

		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}

		int sum=0,cur=0;
		sort(arr,arr+m);

		for(int i=0;i<l;i++){
			if(arr[i]>0){
				sum+=arr[i];
			}else{
				arr[i]=(-1)*arr[i];
				sum+=arr[i];
			}
				
		}

		for(int i=l;i<m;i++){
			if(arr[i]>0){
				cur+=arr[i];
			}
		}


		cout<<cur+sum<<endl;
	}
}