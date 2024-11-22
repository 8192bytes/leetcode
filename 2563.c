int sort(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

long binarySearch(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    long long ret = 0;
    while(left < right) {
        if (nums[left] + nums[right] > target) right--;
        else {ret += right-left;left++;}
    }
    return ret;
}

long long countFairPairs(int* nums, int numsSize, int lower, int upper) {
    qsort(nums, numsSize, sizeof(int), sort);
    return binarySearch(nums,numsSize, upper)-binarySearch(nums,numsSize, lower -1);

}
