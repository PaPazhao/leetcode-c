//28. 找出字符串中第一个匹配项的下标
//https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
bool checkString(char *haystack, int index, char *needle) {
    int curIndex = 0;
    while(haystack[index]) {
        if(needle[curIndex] == 0) {
            return true;
        }
        if(needle[curIndex] != haystack[index]) {
            return false;
        }
        curIndex++;
        index++;
    }
    return haystack[index] == 0 && needle[curIndex] == 0;
}
int strStr(char* haystack, char* needle) {
    int left = 0, right = 0;

    while(haystack[left]) {
        if(checkString(haystack, left, needle) ) {
            return left;    
        }
        left++;
    }
    return -1;
}
