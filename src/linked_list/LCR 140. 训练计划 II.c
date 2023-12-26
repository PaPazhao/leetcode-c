//https://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/description/
struct ListNode* trainingPlan(struct ListNode* head, int cnt) {
    struct ListNode dummp = {0, head};
    struct ListNode *slow = &dummp, *fast = &dummp;

    while(cnt--) {
        fast = fast->next; 
    }

    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}
