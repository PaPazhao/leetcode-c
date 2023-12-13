// https://leetcode.cn/problems/lexicographically-smallest-palindrome/solutions/2562065/zi-dian-xu-zui-xiao-hui-wen-chuan-by-lee-3knw/
// 中等
// 11. 盛最多水的容器.c
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
