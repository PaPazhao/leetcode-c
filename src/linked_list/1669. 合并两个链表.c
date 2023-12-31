//https://leetcode.cn/problems/merge-in-between-linked-lists/description/
struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
     
    struct ListNode *left = list1;
    int index = 0;
    while(++index < a) {
        left = left->next;
    }

    struct ListNode *right = left;
    while(index++ <= b) {
        right = right->next;
    }
    struct ListNode *cur = list2;
    while(cur->next) {
        cur = cur->next;
    }
    cur->next = right->next;
    right->next = NULL;
    left->next = list2;

    return list1;
}
