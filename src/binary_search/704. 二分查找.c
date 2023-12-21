// https://leetcode.cn/problems/binary-search/description/
int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = nums[mid];
        if(midValue == target) {
            return mid;
        } else if (midValue > target) {
            right = mid - 1;
        } else if (midValue < target) {
            left = mid + 1;
        }
    }

    return -1;
}
