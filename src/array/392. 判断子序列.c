//392. 判断子序列
//https://leetcode.cn/problems/is-subsequence/description/?envType=study-plan-v2&envId=top-interview-150
bool isSubsequence(char* s, char* t) {
    int left = 0, right = 0;
    char lChar = s[left];
    char rChar = t[right];

    while(lChar != 0 && rChar != 0) {
        if(lChar == rChar) {
            lChar = s[++left];
            rChar = t[++right];  
            continue; 
        }
        rChar = t[++right];  
    }
    return lChar == 0;
}