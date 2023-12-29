//https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/description/
char* dynamicPassword(char* password, int target) {
    char *tmp = malloc(target);
    memcpy(tmp, password, target); 
    int left = 0, right = target;
    while(password[right] != 0) {
        password[left++] = password[right++];
    }
    memcpy(password+left, tmp, target);
    free(tmp);
    return password;
}
