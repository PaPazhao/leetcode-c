// 19. 删除链表的倒数第 N 个结点
// 中等
// https://leetcode.cn/problems/remove-nth-node-from-end-of-list/submissions/407434490/
struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    struct ListNode dummy = {0, head};
    struct ListNode *fast = &dummy, *slow = &dummy;
    while (n > 0)
    {
        fast = fast->next;
        n -= 1;
    }

    while (fast && fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy.next;
}