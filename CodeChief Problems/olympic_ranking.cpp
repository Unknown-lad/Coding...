#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;

	while(t--){
		int country1=0,country2=0;
		int i=0;
		while(i<3){
			int n;
			cin>>n;
			country1+=n;
			i++;
		}
		for(int i=0;i<3;i++){
			int n;
			cin>>n;
			country2+=n;
		}
		if(country1>country2){
			cout<<"1"<<endl;
		}else{
			cout<<"2"<<endl;
		}
	}

	return 0;
}
