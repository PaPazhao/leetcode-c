// https://leetcode.cn/problems/liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof/description/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a = headA, *b = headB;

    while(a || b) {
        if(a == b) {
            return a;
        }
        a = a == NULL ? headB : a->next;
        b = b == NULL ? headA : b->next;
    }

    return NULL;
}
