// 2. 两数相加
// 中等
// https://leetcode.cn/problems/add-two-numbers/description/

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    struct ListNode *p = dummy;
    int curry = 0;
    dummy->next = NULL;

    while(l1 || l2 || curry) {
        int v1 = 0, v2 = 0;

        if(l1) {
            v1 = l1->val;
            l1 = l1->next;
        }
        if(l2) {
            v2 = l2->val;
            l2 = l2->next;
        }

        int v = v1 + v2 + curry;
        curry = v > 9 ? 1 : 0;
        v = v % 10;
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = v;
        node->next = NULL;
        
        p->next = node;
        p = p->next; 
    }

    return dummy->next;
}


