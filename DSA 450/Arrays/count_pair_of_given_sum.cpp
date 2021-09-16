#include <bits/stdc++.h>
using namespace std;

class Compare{
    public:
    void counting(int arr[],int n,int k){
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    count++;
                }
            }
        }
        cout<<count<<endl;
        //O(n2)
    }
};

int main(){
    
    int arr[]={1, 5, 7, -1, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k = 6;

    Compare obj;
    obj.counting(arr,n,k);

return 0;
}