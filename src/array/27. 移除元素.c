//https://leetcode.cn/problems/remove-element/description/
//27. 移除元素

int removeElement(int* nums, int numsSize, int val) {
    int len = 0;
    int i = 0;

    while(i < numsSize) {
        if(nums[i] == val) {
            i++;
            continue;
        }

        if(len != i) {
            nums[len] = nums[i];
        }

        len++;
        i++;
    }
    
    return len;
}
