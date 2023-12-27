// https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/description/ 
// LCR 123. 图书整理 I
int* reverseBookList(struct ListNode* head, int* returnSize) {
    struct ListNode *pre = NULL, *cur = head;
    int count = 0;

    while(cur) {
        struct ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        count++;
        cur = tmp;
    }

    cur = pre;
    int *arr = malloc(sizeof(int) * count);
    int i = 0;
    while(cur) {
        arr[i++] = cur->val; 
        cur = cur->next;
    }
    *returnSize = count;
    return arr;
}
