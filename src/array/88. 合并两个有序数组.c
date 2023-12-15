// https://leetcode.cn/problems/merge-sorted-array/description/
// 简单
// 88. 合并两个有序数组
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int cursor = m + n - 1;

    int left = m - 1;
    int right = n - 1;

    while(cursor >= 0) {
        if(right < 0) {
            return;
        }

        if(left < 0) {
            break;
        }
        int leftValue = nums1[left];
        int rightValue = nums2[right];
        if(leftValue > rightValue) {
            left--;
            nums1[cursor--] = leftValue;
        } else {
            right--;
            nums1[cursor--] = rightValue;
        }
    }

    while(right >= 0) {
        nums1[cursor--] = nums2[right--];
    }
}
