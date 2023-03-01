// 61. 旋转链表
// 中等
// https://leetcode.cn/problems/rotate-list/description/


struct ListNode* rotateRight(struct ListNode* head, int k){
    struct ListNode *p = head, *fast = head, *slow = head, *res = NULL;

    int len = 1;
    if(head == NULL) {
        return NULL;
    }

    while(p->next) {
        len += 1;
        p = p->next;
    }

    int step = k % len;

    if(step == 0) {
        return head;
    }


    while(step) {
        fast = fast->next;
        step -= 1;
    }

    while(fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    p->next = head;
    res = slow->next;
    slow->next = NULL;
    return res;
}

