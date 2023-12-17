// 143. 重排链表
// https://leetcode.cn/problems/reorder-list/description/
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *fast = head, *slow = head;

    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void mergeList(struct ListNode* left, struct ListNode* right) {
    struct ListNode* leftTemp;
    struct ListNode* rightTemp;

    while(left && right) {
        leftTemp = left->next;
        rightTemp = right->next;

        left->next = right;
        left = leftTemp;

        right->next = left;
        right = rightTemp;
    }
}

void reorderList(struct ListNode* head) {
    if(head == NULL) return;

    struct ListNode *mid = middleNode(head);
    struct ListNode *left = head;
    struct ListNode *right = mid->next;
    mid->next = NULL;

    right = reverseList(right);
    mergeList(left, right);
}
