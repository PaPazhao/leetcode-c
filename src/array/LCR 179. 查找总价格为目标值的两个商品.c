//https://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof/description/
int* twoSum(int* price, int priceSize, int target, int* returnSize) {
    int left = 0, right = priceSize - 1;

    while(left < right) {
        if(price[left] + price[right] == target) {
            int* ret = malloc(sizeof(int) * 2);
            ret[0] = price[left];
            ret[1] = price[right];
            *returnSize = 2;
            return ret;
        } else if(price[left] + price[right] > target)  {
            right--;
        } else if(price[left] + price[right] < target) {
            left++;
        }
    }
    return NULL;
}
