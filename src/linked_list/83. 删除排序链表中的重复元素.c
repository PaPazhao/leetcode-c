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

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    int val = head->val;
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast->next) {
        if(val == fast->next->val) {
            fast = fast->next;
             
            continue;
        }

        slow->next = fast->next;
        slow = slow->next;
        fast = fast->next;
        val = slow->val;
    }
    slow->next = NULL;
    return head;
}
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(NULL == head) { return NULL; }
    struct ListNode dummp = {0, head};
    struct ListNode *left = head, *right = head->next;

    while(right) {
        if(left->val == right->val) {
            right = right->next;
            continue;
        }
        left = left->next;
        left->val = right->val;
    }
    left->next = NULL;
    return dummp.next;
}