//https://leetcode.cn/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/submissions/
//LCR 142. 训练计划 IV
struct ListNode* trainningPlan(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dump = {0, NULL};
    struct ListNode *cur = &dump;
    while(l1 && l2) {
        if(l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        } else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    if(l1) {
        cur->next = l1;
    }
    if(l2) {
        cur->next = l2;
    }
    return dump.next;
}
