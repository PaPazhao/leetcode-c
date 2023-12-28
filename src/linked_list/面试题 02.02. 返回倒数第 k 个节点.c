//https://leetcode.cn/problems/kth-node-from-end-of-list-lcci/description/
int kthToLast(struct ListNode* head, int k){
    struct ListNode dummp = {0, head};
    struct ListNode *slow = &dummp, *fast = &dummp;
    while(fast && fast->next && k > 0) {
        fast = fast->next;
        k--;
    }
    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->val;
}
