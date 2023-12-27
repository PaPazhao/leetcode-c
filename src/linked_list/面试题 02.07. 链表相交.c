//https://leetcode.cn/problems/intersection-of-two-linked-lists-lcci/description/
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
