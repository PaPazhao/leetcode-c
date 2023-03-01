// 86. 分隔链表
// 中等
// https://leetcode.cn/problems/partition-list/submissions/407463102/

struct ListNode *partition(struct ListNode *head, int x)
{
    struct ListNode *small = malloc(sizeof(struct ListNode));
    struct ListNode *large = malloc(sizeof(struct ListNode));
    struct ListNode *smallHead = small, *largeHead = large, *p = head;

    while (p)
    {
        if (p->val < x)
        {
            small->next = p;
            small = small->next;
        }
        else
        {
            large->next = p;
            large = large->next;
        }
        p = p->next;
    }
    large->next = NULL;
    small->next = largeHead->next;
    return smallHead->next;
}