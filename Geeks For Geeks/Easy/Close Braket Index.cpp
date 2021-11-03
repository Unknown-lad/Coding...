#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int areIsomorphic(string str1, int pos){

		int n=0,p=0,res=0;
		for(pos;pos<str1.length();pos++){
			if(str1[pos]=='['){
				p++;
				cout<<str1[pos]<<" "<<pos<<" "<<p<<endl;
			}
			if(str1[pos]==']'){
				n--;
				cout<<str1[pos]<<" "<<pos<<" "<<n<<endl;
			}
			if(n+p==0){
				res=pos;
				break;
			}
		}
		return res;
    }
};

int main(){
	int t;
	cin>>t;

	while(t--){
		string s1;
		cin>>s1;
		int pos;
		cin>>pos;

		Solution obj;
		cout<<obj.areIsomorphic(s1,pos)<<endl;
	}
}
