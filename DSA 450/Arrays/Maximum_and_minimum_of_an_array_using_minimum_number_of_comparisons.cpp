#include <iostream>
using namespace std;

struct Pair{
    int min,max;
};

struct Pair getMinMax_linearSearch(int arr[],int n){
    struct Pair minmax;
    int i;

    if(n==1){
        minmax.min=arr[0];
        minmax.max=arr[0];

        return minmax;
    }

    if(arr[0]>arr[i]){
        minmax.min = arr[i];
        minmax.max = arr[0];
    }
    else{
        minmax.min=arr[0];
        minmax.max=arr[i];
    }

    for(i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

struct Pair getMinMax_Tournament_Metord(int arr[],int low, int high){
    struct Pair minmax, arr_l,arr_r;
    int mid;

    if(low==high){
        minmax.min= arr[low];
        minmax.max = arr[low];

        return minmax;
    }

    if(high==low+1){
        if(arr[high]<arr[low]){
            minmax.min = high;
            minmax.max = low;
        }
        else{
            minmax.min= low;
            minmax.max = high;
        }
    }

    mid = (low+high)/2;
    arr_l = getMinMax_Tournament_Metord(arr, low, mid);
    arr_r = getMinMax_Tournament_Metord(arr, mid+1, high);

    if(arr_l.min<arr_r.min)
        minmax.min= arr_l.min;
    else
        minmax.min = arr_r.min;

    if(arr_l.max>arr_r.max)
        minmax.max = arr_l.max;
    else
        minmax.max = arr_r.max;

    return minmax;
}

int main(){
    
    int arr[]={33,1,55,2,9,99};
    int size=6;
    //linear search
    struct Pair minmax = getMinMax_linearSearch(arr,size);
    //divide and conquer way
    // struct Pair minmax = getMinMax_Tournament_Metord(arr,0,size-1);
    

    cout<<"Max: "<<minmax.max<<endl;
    cout<<"Min: "<<minmax.min<<endl;
    
    cout<<endl;
return 0;
}