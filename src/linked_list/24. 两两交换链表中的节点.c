//https://leetcode.cn/problems/swap-nodes-in-pairs/description/
struct ListNode* swapPairs(struct ListNode* head) {
    if((head == NULL) || (head->next == NULL)) {
        return head;
    }

    struct ListNode *lastList = swapPairs(head->next->next);
    struct ListNode *newHead = head->next;
    head->next = lastList;
    newHead->next = head;
    return newHead;
}
