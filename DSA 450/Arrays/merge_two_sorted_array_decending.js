function Merge(a,n,b,m){
    var i,j=0;
    var merge = [n+m];

    for(i=0;i<n;i++){
        merge[i]=a[i];
    }

    for(i=n;i<n+m;i++){
        merge[i]=b[j];
        j++;
    }
    console.log(merge);

}
Merge([1, 3, 5, 7],4,[0, 9, 6, 8, 1],5);

function partition(arr, lb, ub){
    var pivot = arr[ub];
    var i = lb-1, j;

    for(j=lb;j<ub-1;j++){
        if(arr[j]>pivot){
            i++;
            var temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    var temp2 = arr[i+1];
    arr[i+1] = arr[ub];
    arr[ub] = temp2;

    return (i+1);
}
