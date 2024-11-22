bool canSortArray(int* nums, int numsSize) {
    int b, bh=0, min=0,max=0,maxh=0;
    for(int i = 0;i<numsSize;i++){
        b = __builtin_popcount(nums[i]);
        if(bh == b){
            min = (min>nums[i]) ? nums[i] : min;
            max = (max<nums[i]) ? nums[i] : max;
        } else if (min < maxh) return false;
        else {
            maxh = max;
            min = max = nums[i];
            bh = b;
        }
    }
    return min >= maxh;
}
