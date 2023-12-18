// https://leetcode.cn/problems/palindrome-number/description/
bool isPalindrome(int x) {
    if(x < 0) return false;

    char bit[100] = {0};
    char len = 0;

    while(x > 0) {
        bit[len++] = x % 10;
        x = x / 10;
    }

    char num = 0;
    while(num < len / 2) {
        if( bit[num] != bit[len - num - 1] ) {
            return false;
        }
        num++;
    }
    return true;
}
