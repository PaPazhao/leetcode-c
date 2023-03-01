// 83. 删除排序链表中的重复元素
// 简单
// https://leetcode.cn/problems/remove-duplicates-from-sorted-list/description/

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode dummy = {-101, head};
    struct ListNode *p = &dummy;
    if(head == NULL) {
        return head;
    }
    while(p) {
        struct ListNode *next = p->next;
        while(next && p->val == next->val) {
            next = next->next;
        }
        p->next = next;
        p = p->next;
    }

    return dummy.next;
}