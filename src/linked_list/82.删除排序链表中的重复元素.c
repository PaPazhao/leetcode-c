// https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/solutions/678122/shan-chu-pai-xu-lian-biao-zhong-de-zhong-oayn/
// 中等
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode dummy = {0, head};
    struct ListNode *slow = head, *fast = head->next;
    struct ListNode *current = &dummy;

    while(fast) {
        if(fast->val == slow->val) {
            fast = fast->next;
            continue;
        }
        if(slow->next == fast) {
            fast = fast->next;
            slow = slow->next;
            current = current->next;
        } else {
            current->next = fast;
            slow = fast;
            fast = fast->next;
        }
    }
    if(slow->next != fast) {
        current->next = NULL;
    }
    return dummy.next;
}
