#include <bits/stdc++.h>
using namespace std;

class Union_intersection{
    public:
    int count=0;

    void Count(int arr[], int n, int arr2[],int m){
        int i=0,j=0;
        while(i<n && j<m){
            if(arr[i]<arr2[j]){
                cout<<arr[i++]<<" ";
                count++;
            }
            else if(arr2[j]<arr[i]){
                cout<<arr2[j++]<<" ";
                count++;
            }
            else{
                cout<<arr2[j++]<<" ";
                i++;
                count++;
            }
        }

        while(i<n){
            cout<<arr[i++]<<" ";
            count++;
        }
        while(j<m){
            cout<<arr2[j++]<<" ";
            count++;
        }
        cout<<"\n"<<count;
    }
};

int main(){
    
    int arr[]={1,2,3,4,5};
    int arr2[]={1,4,9};

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    Union_intersection Un;
    
    Un.Count(arr, n, arr2, m);
    cout<<endl;

return 0;
}