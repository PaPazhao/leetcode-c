// 160. 相交链表
// 简单
// https://leetcode.cn/problems/intersection-of-two-linked-lists/description/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *left = headA, *right = headB;

    while(left != right) {
        left = NULL == left ? headB : left->next;
        right = NULL == right ? headA : right->next;
    }
    return left;
}