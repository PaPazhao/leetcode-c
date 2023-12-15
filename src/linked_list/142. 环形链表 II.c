//https://leetcode.cn/problems/linked-list-cycle-ii/description/
//中等
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *start = NULL;

    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow) {
            start = slow;
            break;
        }
    }

    if(start == NULL) {
        return NULL;
    }

    slow = head;

    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}
