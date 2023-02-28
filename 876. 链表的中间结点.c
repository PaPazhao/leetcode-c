// 876. 链表的中间结点
// 简单
// https://leetcode.cn/problems/middle-of-the-linked-list/description/

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode *fast = head, *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}