
void moveZeroes(int* nums, int numsSize) {
    int left = 0, right = 0;

    while(right < numsSize) {
        if(nums[right] == 0) {
            right++;
            continue;
        } 
        nums[left++] = nums[right++];
    }
    while(left < numsSize) {
        nums[left++] = 0;
    }
}
