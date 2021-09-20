#include <iostream>
#include <utility>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		
		pair<int,int> p1,p2,p3;

		cin>>p1.first;
		cin>>p1.second;

		cin>>p2.first;
		cin>>p2.second;

		cin>>p3.first;
		cin>>p3.second;

		if((p1.first == p2.first && p1.second==p2.second) || (p1.first==p2.second && p1.second==p2.first)){
			cout<<"1"<<endl;
		}
		else if((p1.first == p3.first && p1.second==p3.second) || (p1.first==p3.second && p1.second==p3.first)){
			cout<<"2"<<endl;
		}
		else
			cout<<"0"<<endl;
	}
}