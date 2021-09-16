#include <bits/stdc++.h>
using namespace std;

void zigzag(int arr[], int n){
    int count=0,i=0;
    //Approach 1
    while(i!=n){
        if(i%2!=0){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        if(i%2==0){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        i++;
    }
    //Approach 2
    bool flag= true;
    while (i!=n){
        if(flag){
            if(arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
        }else{
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        flag!=flag;
        i++;
    }
    

}

int main(){
    
    int arr [] = {4, 3, 7, 8, 6, 2, 1};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);

    zigzag(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}