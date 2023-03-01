// 剑指 Offer 24. 反转链表
// 简单
// https://leetcode.cn/problems/fan-zhuan-lian-biao-lcof/submissions/407405116/
struct ListNode *reverseList(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *last = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return last;
}