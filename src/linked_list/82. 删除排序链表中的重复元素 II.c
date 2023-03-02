// 82. 删除排序链表中的重复元素 II
// 中等
// https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/description/

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(NULL == head) {
        return NULL;
    }

    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *cur = dummy;

    while(cur->next && cur->next->next) {
        int x = cur->next->val;
        if(x == cur->next->next->val) {
            while(cur->next && cur->next->val == x) {
                cur->next = cur->next->next;
            }
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
} 