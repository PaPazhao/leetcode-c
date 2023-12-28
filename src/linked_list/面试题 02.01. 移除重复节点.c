//https://leetcode.cn/problems/remove-duplicate-node-lcci/description/
struct ListNode* removeDuplicateNodes(struct ListNode* head){
    int tmp[20001] = {0}; 

    struct ListNode dummp = {0, head};
    struct ListNode *cur = &dummp;

    while(cur && cur->next) {
        int value = cur->next->val;
        if(tmp[value] == 0) {
            tmp[value]++;
            cur = cur->next;
        } else {
            cur->next = cur->next->next;
        }
    }
    return dummp.next;
}
