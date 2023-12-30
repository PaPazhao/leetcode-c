//https://leetcode.cn/problems/reverse-words-in-a-string-iii/description/
void reverseString(char* s, int left, int right) {
    // s[left, right]
    while(left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
char* reverseWords(char* s) {
    int left = 0, right = 0;
    int state = 0;

    while(s[right]) {
        switch(state) {
            case 0:
                char value = s[right];
                if(value != ' ') {
                    right++;
                    break;
                }
                reverseString(s, left, right - 1);
                left = right;
                state++;
                
            case 1:
                if(s[left] == ' ') {
                    left++;
                    right++; 
                    break;
                } 
                state = 0;
                break;
        }
    }
    if(left != right) {
        reverseString(s, left, right - 1);
    }
    return s;
}
