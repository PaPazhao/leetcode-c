// https://leetcode.cn/problems/remove-duplicates-from-sorted-array/submissions/
// 26. 删除有序数组中的重复项
// 简单
int removeDuplicates(int* nums, int numsSize) {
    int left = 0, right = 1;

    if(numsSize < 2) {
        return numsSize;
    }

    while(right < numsSize) {
        if(nums[left] != nums[right]) {
            left++;
            if(right > left) {
                nums[left] = nums[right];
            }
        }
        right += 1;
    }

    return left + 1;
}
