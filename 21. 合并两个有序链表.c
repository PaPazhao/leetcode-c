// 21. 合并两个有序链表
// 简单
// https://leetcode.cn/problems/merge-two-sorted-lists/description/

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode dummy = {0, NULL};
    struct ListNode *l1 = list1, *l2 = list2, *p = &dummy;

    while (l1 && l2)
    {
        if (l1->val > l2->val)
        {
            p->next = l2;
            l2 = l2->next;
        }
        else
        {
            p->next = l1;
            l1 = l1->next;
        }
        p = p->next;
    }

    if (l1)
    {
        p->next = l1;
    }
    if (l2)
    {
        p->next = l2;
    }
    return dummy.next;
}