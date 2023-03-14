// 1. 两数之和
// 简单
// https://leetcode.cn/problems/two-sum/description/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    if(NULL == nums || numsSize < 2 || NULL == returnSize) {
        return NULL;
    }

    int left = 0, right = 1;
    for(left = 0; left < numsSize - 1; left++) {
        int num = target - nums[left];
        for(right = left + 1; right < numsSize; right++) {
            if(num == nums[right]) {
                int *res =  malloc(sizeof(int) * 2);
                res[0] = left;
                res[1] = right;
                *returnSize = 2;
                return res;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
