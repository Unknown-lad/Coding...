#include <bits/stdc++.h>
using namespace std;

class share_profit{
    public:
    
    void profit(int arr[],int n){
        int temp=arr[0],pos;

        for(int i=0;i<n;i++){
            if(arr[i]<temp){
                temp=arr[i];
                pos=i;
            }
        }
        int temp2=arr[pos],pos2;

        for(int i=pos;i<n;i++){
         if(arr[i]>temp2){
            temp2=arr[i];
                    pos2=i;
                }        
            }
        int profit=temp2-temp;
        cout<<profit<<endl;
    }
};

int main(){
    
    int arr[]={7,3,5,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    share_profit obj;
    obj.profit(arr,n);


return 0;
}