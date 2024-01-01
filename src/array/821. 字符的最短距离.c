/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #define min(a, b) ((a) < (b) ? (a) : (b))
int* shortestToChar(char* s, char c, int* returnSize) {
    int n = strlen(s);
    int *ans = (int*)malloc( sizeof(int) * n);

    for(int i = 0, idx = -n; i < n; i++) {
        if(s[i] == c) {
            idx = i;
        }
        ans[i] = i - idx;
        printf("%d\t", ans[i]);
    }

        printf("\n");
    for(int i = n - 1, idx = 2 * n; i >= 0; i--) {
        if(s[i] == c) {
            idx = i;
        }
        ans[i] = min(ans[i], idx - i);

        printf("%d\t", idx - i);
    }
    *returnSize = n;
    return ans;
}
