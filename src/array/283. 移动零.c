//https://leetcode.cn/problems/move-zeroes/description/
void moveZeroes(int* nums, int numsSize) {
    if(numsSize < 1) return;
    int left = 0, right = 0;

    while(right < numsSize) {
        if(nums[right] == 0) {
            right++;
            continue;
        } 

        int tmp = nums[right];
        nums[right++] = nums[left];
        nums[left++] = tmp;
    }
 
}
