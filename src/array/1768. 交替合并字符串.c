// 1768. 交替合并字符串
// https://leetcode.cn/problems/merge-strings-alternately/?envType=study-plan-v2&envId=programming-skills
char * mergeAlternately(char * word1, char * word2){
    int lLen = strlen(word1);
    int rLen = strlen(word2);
    char *res = malloc(lLen + rLen + 1);
    if(res == NULL) return NULL;
    res[lLen + rLen] = 0;
    int left = 0, right = 0; 
    while(right < fmin(lLen, rLen)) { 
        res[left] = word1[right];
        res[left+1] = word2[right];
        left+=2;
        right++;
    }

    if(right == lLen) {
        while(right < rLen) {
            res[left++] = word2[right++];
        }
    } else {
        while(right < lLen) {
            res[left++] = word1[right++];
        }
    }
    return res;
}