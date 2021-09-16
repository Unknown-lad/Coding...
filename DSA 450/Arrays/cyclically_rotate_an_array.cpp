#include <bits/stdc++.h>
using namespace std;

class Cyclically_rotate{
    public:
    void show_rotate(int arr[], int n){
        int x = arr[n-1],i;

        for (i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
            arr[0] = x;
        }
    //or
    // void show_rotate(int arr[], int n){
    //     for(int i=n-1;i>0;i--){
    //         swap(arr[i],arr[n-1]);
    //     }
    // }

    void show_array(int arr[], int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    Cyclically_rotate cn;
    cn.show_rotate(arr,n);
    cn.show_array(arr, n);

    cout<<"\n";

return 0;
}