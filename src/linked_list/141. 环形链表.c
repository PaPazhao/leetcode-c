// 141. 环形链表
// 简单
// https://leetcode.cn/problems/linked-list-cycle/description/
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head, *fast = head;
    while(NULL != fast && NULL != fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) {
            return true;
        }
    }
    return false;
}