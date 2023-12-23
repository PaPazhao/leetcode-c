// 1. 两数之和
// 简单
// https://leetcode.cn/problems/two-sum/description/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++) {
        int v = target - nums[i];
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[j] == v) {
                int *ret = malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
