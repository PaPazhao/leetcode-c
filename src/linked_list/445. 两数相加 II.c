// 445. 两数相加 II
// 中等
// https://leetcode.cn/problems/add-two-numbers-ii/description/

struct ListNode *reversed(struct ListNode *head)
{
    struct ListNode *dummp = malloc(sizeof(struct ListNode));
    struct ListNode *p = head;
    dummp->next = NULL;

    while (p)
    {
        struct ListNode *next = p->next;
        p->next = dummp->next;
        dummp->next = p;
        p = next;
    }

    return dummp->next;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *rl1 = reversed(l1);
    struct ListNode *rl2 = reversed(l2);
    int curry = 0;
    struct ListNode *dummp = malloc(sizeof(struct ListNode));
    dummp->next = NULL;

    while (rl1 != NULL || rl2 != NULL || curry != 0)
    {
        int vl1 = 0, vl2 = 0;
        if (rl1 != NULL)
        {
            vl1 = rl1->val;
            rl1 = rl1->next;
        }
        if (rl2 != NULL)
        {
            vl2 = rl2->val;
            rl2 = rl2->next;
        }
        int total = vl1 + vl2 + curry;
        curry = total > 9 ? 1 : 0;
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = total % 10;
        node->next = dummp->next;
        dummp->next = node;
    }
    return dummp->next;
}