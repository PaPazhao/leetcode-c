int missingNumber(int* nums, int numsSize) {
    int total = 0;
    for(int i = 0; i < numsSize; i++) {
        total += nums[i];
    }
    return ((numsSize + 1)* (0 + numsSize)) / 2 - total;
}
int missingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    for(int i = 0; i < numsSize; i++) {
        total -= nums[i];
    }
    return total;
}
