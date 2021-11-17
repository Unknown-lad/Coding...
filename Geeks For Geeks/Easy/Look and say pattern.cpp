#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string s="1",str;
        int count=1;
        
        for(int i=2;i<=n;i++){
            str="";
            for(int j=0;j<s.length()-1;j++){
                if(s[j]==s[j+1]){
                    count++;
                }else{
                    str+=to_string(count)+s[j];
                    count=1;
                }
            }
            str+=to_string(count)+s[s.length()-1];
            count=1;
            s=str;
        }
        
        return s;
    }   
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
