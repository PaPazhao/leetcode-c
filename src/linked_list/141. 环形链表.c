// 141. 环形链表
// 简单
// https://leetcode.cn/problems/linked-list-cycle/description/
bool hasCycle(struct ListNode *head)
{
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next)
    {
        if (fast == slow)
        {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}