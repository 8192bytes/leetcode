int removeElement(int* nums, int numsSize, int val) {
    int i=0;
    while(i < numsSize && nums[i] != val) i++;
    for(int j=i+1; j<numsSize; j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
