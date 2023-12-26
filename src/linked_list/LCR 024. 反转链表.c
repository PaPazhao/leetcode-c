// https://leetcode.cn/problems/UHnkqh/description/
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *n = head->next ;
   
    struct ListNode *ret = reverseList(head->next);
    head->next = NULL;
    n->next = head;
    return ret;
}
