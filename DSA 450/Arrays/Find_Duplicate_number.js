function Frequency(nums){
    var i;
    var n = nums.length;
    nums.sort();
    for(i=1;i<n;i++){
        if(nums[i]==nums[i+1]){
             console.log(nums[i]);
        }
    }
}
Frequency([1,3,4,2,2]);