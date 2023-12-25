// https://leetcode.cn/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150
int majorityElement(int* nums, int numsSize) {
    int candidate = -1;
    int count = 0;
    int index = 0;
    while(index < numsSize) {
        if(nums[index] == candidate) {
            ++count;
        } else if (--count < 0) {
            candidate = nums[index];
            count = 1;
        }

        index++;
    }
    return candidate;
}
