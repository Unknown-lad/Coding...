#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int n)
    {
      map <int,int> ul;

      for(int i=0;i<n;i++){
        ul[arr[i]]++;
      }
      int c=0,cm=0;
      for(auto v : ul){
        int key = v.first;

        if(ul.find(key+1)!=ul.end()){
            c++;
        }
        else{
            if(c>cm)
                cm=c;
            c=0;
        }
      }

      return cm+1;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
} 