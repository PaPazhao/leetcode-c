
//https://leetcode.cn/problems/range-sum-query-immutable/

typedef struct {
    int* preSum;
    int numsSize;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray *obj = malloc(sizeof(NumArray));
    if(obj == NULL) {
        return NULL;
    }

    int *mem = malloc(sizeof(int) * (numsSize + 1));
    if(mem == NULL) {
        free(obj);
        return NULL;
    }
    obj->numsSize = numsSize;
    obj->preSum = mem;
    mem[0] = 0;
    for(int i = 1; i < numsSize + 1; i++) {
        mem[i] = nums[i - 1] + mem[i - 1]; 
    }
    return obj;
}

int numArraySumRange(NumArray* obj, int left, int right) {
    return obj->preSum[right + 1] - obj->preSum[left];
}

void numArrayFree(NumArray* obj) {
    free(obj->preSum);
    free(obj);
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * int param_1 = numArraySumRange(obj, left, right);
 
 * numArrayFree(obj);
*/