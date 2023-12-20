// 61. 旋转链表
// 中等
// https://leetcode.cn/problems/rotate-list/description/
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(k == 0 || head == NULL) {
        return head;
    }

    struct ListNode *cur = head;
    int len = 0;
    while(cur) {
        len++;
        cur = cur->next;
    }
    k = k % len;
    if(k == 0) {
        return head;
    }

    struct ListNode dummy = {0, head};
    struct ListNode *fast = &dummy, *slow = &dummy;
    while(k) {
        fast = fast->next;
        k--;
    }
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    struct ListNode *ret = slow->next;
    slow->next = NULL;
    fast->next = head;
    return ret;

}

