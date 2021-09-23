#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool sub_string(string s1, string s2){
        int a = s1.size(),b = s2.size();

        int i,j;
        for(i=0;i<=b-a;i++){
            for(j=0;j<a;j++)
                if(s2[i+j]!=s1[j])
                    break;

                if(j==a)
                    return true;
            }
        return false;
    }

   int repeatedStringMatch(string A, string B) {
        int res=1;

        string s=A;

        while(s.size()<B.size()){
            s+=A;
            res++;
        }

        if(sub_string(B,s))
            return res;
        if(sub_string(B,s+A))
            return res+1;

        return -1;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}