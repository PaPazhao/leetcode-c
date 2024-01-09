//https://leetcode.cn/problems/valid-palindrome/
char getChar(char c) {
    if(c >= 'a' && c <= 'z') {
        return c;
    }
    
    if(c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    if(c >= '0' && c <= '9') {
        return c ;
    }
    return -1;
}

bool isPalindrome(char* s) {
    int len = strlen(s);
    int left = 0, right = len - 1;
    char leftChar = -1, rightChar = -1;

    while(left < right) {
        leftChar = getChar(s[left]);
        while(leftChar == -1 && (left < right)) {
            left++;
            leftChar = getChar(s[left]);
        }

        rightChar = getChar(s[right]);
        while(rightChar == -1 && (left < right)) {
            right--;
            rightChar = getChar(s[right]);
        }
         
        if(leftChar != rightChar) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
