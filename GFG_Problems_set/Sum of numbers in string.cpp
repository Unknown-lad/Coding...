#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int findSum(string s)
    {
    	// Your code here
        int num=0;
        int sum=0;

        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                num = num*10 + (s[i]-'0');
            }
            else{
                sum+=num;
                num=0;
            }
        }

        return sum+num;
    }
};

int main(){

	int t;
	cin>>t;

	while(t--){
		string str;
        cin>>str;

        Solution obj;
        cout << obj.findSum(str) << endl;
	}
}