// 2. 两数相加
// 中等
// https://leetcode.cn/problems/add-two-numbers/description/

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int incBit = 0;

    struct ListNode dump = {0, NULL};
    struct ListNode *cur = &dump;
    while((l1 != NULL) || (l2 != NULL) || incBit) {
        if(l1) {
            incBit += l1->val;
            l1 = l1->next;    
        }
        
        if(l2) {
            incBit += l2->val;
            l2 = l2->next;    
        }
        
        struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = incBit % 10;
        node->next = NULL;
        cur->next = node;
        cur = cur->next;
        incBit /= 10;
    }
    return dump.next;
}


