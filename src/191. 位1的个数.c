//https://leetcode.cn/problems/number-of-1-bits/description/

int hammingWeight(uint32_t n) {
    int res = 0;
    while (n != 0) {
        n = n & (n - 1);
        res++;
    }
    return res; 
}
