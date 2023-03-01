// 206. 反转链表
// 简单
// https://leetcode.cn/problems/reverse-linked-list/description/

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode dummy = {0, NULL};

    struct ListNode *p = head;
    while (p)
    {
        struct ListNode *next = p->next;
        p->next = dummy.next;
        dummy.next = p;
        p = next;
    }
    return dummy.next;
}