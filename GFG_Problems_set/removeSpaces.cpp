//Remove Spaces
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string st=s;
        return st;
    }
};

int main(){

	int t;
	cin>>t;
    cin.ignore();
	while(t--){
		string str;
        getline(cin,str);

        Solution obj;
        cout << obj.modify(str) << endl;
	}
}