//203. 移除链表元素
//https://leetcode.cn/problems/remove-linked-list-elements/description/
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummp = {0, head};
    struct ListNode *cur = &dummp;

    while(cur && cur->next) {
        if(cur->next->val == val) {
            cur->next = cur->next->next;
            continue;
        }
        cur = cur->next;
    }
    return dummp.next;
}
