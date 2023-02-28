// 92. 反转链表 II
// 中等
// https://leetcode.cn/problems/reverse-linked-list-ii/submissions/407398893/
struct ListNode *tail = NULL;
struct ListNode *reverseN(struct ListNode *head, int n)
{
    if (n == 1)
    {
        tail = head->next;
        return head;
    }

    struct ListNode *last = reverseN(head->next, n - 1);
    head->next->next = head;
    head->next = tail;
    return last;
}

struct ListNode *reverseBetween(struct ListNode *head, int left, int right)
{
    if (left == 1)
    {
        return reverseN(head, right);
    }
    head->next = reverseBetween(head->next, left - 1, right - 1);

    return head;
}