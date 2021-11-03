//Remove Spaces
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string modify (string str)
    {
        //code here.
        // int c=0;

        // for (int i = 0; s[i]; i++)
        // if (s[i] != ' ')
        //     s[c++] = s[i];

        // s[c]='\0';

        str.erase(remove(str.begin(), str.end(), ' '), str.end());

        // string str=s;

        return str;
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