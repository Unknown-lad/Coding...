#include <bits/stdc++.h>
using namespace std;

void cout_pair(int arr[],int n,int x){
    x=6;
    int count=0,mid;
    //brute force -> O(n²) ¹²³⁴⁵⁶⁷⁸⁹⁰
    for(int i=0;i<n-1;i++){
        mid=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]+arr[mid]==x){
                count++;
            }
        }
    }

    //optimised methord-> O(n);
    
    cout<<count;
}

int main(){
    int arr[]= {1, 5, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout_pair(arr,n,x);
    cout<<endl;
return 0;
}