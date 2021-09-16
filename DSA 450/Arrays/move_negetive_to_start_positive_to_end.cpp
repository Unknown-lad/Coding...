#include <bits/stdc++.h>
using namespace std;

class Sort_Negetives{
    public:
    
    void divide(int arr[], int n){
        int l,i;
        int k=n;

        for(i=0;i<n;i++){
            if(arr[i]>0){
                if(i!=k){
                    swap(arr[i],arr[k]);
                    k--;
                }
            }
        }
    }
};

int main(){
    
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Sort_Negetives ng;
    ng.divide(arr,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}