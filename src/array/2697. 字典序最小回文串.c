// https://leetcode.cn/problems/lexicographically-smallest-palindrome/description/
// 2697. 字典序最小回文串
// 简单
char * makeSmallestPalindrome(char * s){
    uint32_t len = strlen(s);
    for(uint32_t i = 0; i < len / 2; i++) {
        if(s[i] == s[len - i - 1]) {
            continue;
        }
        if(s[i] > s[len - i - 1])  {
            s[i] = s[len - i - 1];
        } else {
            s[len - i - 1] = s[i];
        }
    }
    return s;
}
