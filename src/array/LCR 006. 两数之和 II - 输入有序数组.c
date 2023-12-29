//https://leetcode.cn/problems/kLl5u1/description/
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int left = 0,  right = numbersSize - 1;

    while(left < right) {
        int leftValue = numbers[left];
        int rightValue = numbers[right];
        if(leftValue + rightValue == target) {
            int* ret = malloc(sizeof(int) * 2);
            ret[0] = left;
            ret[1] = right;
            *returnSize = 2;
            return ret;
        } if(leftValue + rightValue > target) {
            right--;
        } if(leftValue + rightValue < target) {
            left++;
        }
    }

    *returnSize = 0;
    return NULL;
}
