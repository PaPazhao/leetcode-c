// 35. 搜索插入位置
// 简单
// https://leetcode.cn/problems/search-insert-position/description/
int searchInsert(int *nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int value = nums[mid];
        printf("%d - %d\n", mid, value);
        if (value == target)
        {
            return mid;
        }
        else if (target > value)
        {
            left = mid + 1;
        }
        else if (target < value)
        {
            right = mid - 1;
        }
    }
    return left;
}