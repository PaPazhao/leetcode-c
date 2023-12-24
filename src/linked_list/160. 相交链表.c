// 160. 相交链表
// 简单
// https://leetcode.cn/problems/intersection-of-two-linked-lists/description/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *A = headA, *B = headB;

    while(A != B) {
        A = A == NULL ? headB : A->next;
        B = B == NULL ? headA : B->next;
    }
    return A;
}
