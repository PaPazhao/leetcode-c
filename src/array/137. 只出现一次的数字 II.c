//https://leetcode.cn/problems/single-number-ii/description/
int singleNumber(int* nums, int numsSize) {
    int a = 0, b = 0;
    for(int i = 0; i < numsSize; i++) {
        int ta = (~a & b & nums[i]) | (a & ~b & ~nums[i]);
        int tb = ~a & (b ^ nums[i]);
        a = ta;
        b = tb;
    }
    return b;
}
