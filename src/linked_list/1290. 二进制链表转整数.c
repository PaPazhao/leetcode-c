// 1290. 二进制链表转整数
// 简单
// https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/description/

int getDecimalValue(struct ListNode* head){
    int val = 0;

    while(head) {
        val = val * 2 + head->val;
        head = head->next;
        printf("%d", val);
    }
    return val;
}