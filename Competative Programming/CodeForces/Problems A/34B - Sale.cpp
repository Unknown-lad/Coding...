#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
 
int main(){
    int l,m;
    cin>>l>>m;
 
    vector<int> v;
    for(int i=0;i<l;i++){
        int val;
        cin>>val;
        if(val<0){
            abs(val);
        }
        v.push_back(val);
    }
 
    sort(v.begin(),v.end());
 
    int sum=0;
    for(int i=0;i<m;i++){
        if(v[i]<0){
            sum+=abs(v[i]);
        }
    }
    cout<<sum;
}
