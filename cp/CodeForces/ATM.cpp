#include <iostream>
using namespace std;

int main(){

	int wid;
	float tot,res,ext_crg=0.5;

	cin>>wid>>tot;
	
	if(wid %5==0 && wid<tot){
		res = tot-wid-ext_crg;
		cout<<res<<endl;
	}else{
		cout<<tot<<endl;
	}

	return 0;
}
