//67. 二进制求和
//https://leetcode.cn/problems/add-binary/description/?envType=study-plan-v2&envId=top-interview-150
char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b); 
    int resLen = fmax(lenA, lenB) + 2;
    char *res = malloc(resLen);
    res[resLen - 1] = 0;
    int k = resLen - 2;
    int sum = 0;
    for(int i = lenA - 1, j = lenB - 1; i >= 0 || j >= 0; i--, j--) {
        sum += i >= 0 ? a[i] - '0' : 0;
        sum += j >= 0 ? b[j] - '0' : 0;
        res[k--] = '0' + sum % 2;
        sum /= 2;
    }
    if(sum) {
        res[0] = '1';
        return res;
    }
    return res + 1;
}