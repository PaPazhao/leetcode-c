void swapValue(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void sortColors(int* nums, int numsSize) {
    int left = -1, right = numsSize;
    int i = 0;
    while(i < right) {
        int v = nums[i];
        if(v == 1) {
            i++;
        } else if (v == 0) {
            swapValue(nums + i, nums + left + 1);
            left++;
            i++;
        } else if (v == 2) {
            swapValue(nums + i, nums + right - 1);
            right--;
        }
    } 
}
