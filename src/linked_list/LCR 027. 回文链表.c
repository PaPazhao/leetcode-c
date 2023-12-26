// https://leetcode.cn/problems/aMhZSa/description/
struct ListNode *getCenter(struct ListNode *head) {
    struct ListNode dummp = {0, head};
    struct ListNode *fast = &dummp, *slow = &dummp;

    while((fast != NULL) && (fast->next != NULL)) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->next;
}
struct ListNode *reverse(struct ListNode *head) {
    struct ListNode *ret = NULL;

    while(head) {
        struct ListNode *tmp = head->next;
        head->next = ret;
        ret = head;
        head = tmp;
    }
    return ret;
}
bool isPalindrome(struct ListNode* head){

    if(head->next == NULL) return true;
    struct ListNode *center = getCenter(head);
    struct ListNode *reversed = reverse(center);

    while(reversed) {
        if(reversed->val != head->val) {
            return false;
        }
        reversed = reversed->next;
        head = head->next;
    }
    return true;
}
