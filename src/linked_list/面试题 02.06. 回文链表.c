//https://leetcode.cn/problems/liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof/description/
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre = NULL, *cur = head;

    while(cur) {
        struct ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

bool isPalindrome(struct ListNode* head){
    if(head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode *fast = head, *slow = head;
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast) {
        slow = slow->next;
    }
    fast = reverseList(slow);
    slow = head;
    while(fast) {
        if(fast->val != slow->val) {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}
