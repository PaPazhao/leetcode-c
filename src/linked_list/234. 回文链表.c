//https://leetcode.cn/problems/palindrome-linked-list/description/
struct ListNode* reverse(struct ListNode *head) {
    struct ListNode *pre = NULL, *cur = head;

    while(cur) {
        struct ListNode *next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}
bool isPalindrome(struct ListNode* head) { 
    struct ListNode* fast = head, *slow = head;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast) {
        slow = slow->next;
    }

    struct ListNode *left = head;
    struct ListNode *right = reverse(slow);

    while(right) {
        if(left->val != right->val) {
            return false;
        }
        left = left->next;
        right = right->next;
    }
   
    return true;
}
