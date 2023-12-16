// https://leetcode.cn/problems/merge-two-sorted-lists/description/
// 递归解法
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL) {
        return list2;
    }

    if(list2 == NULL) {
        return list1;
    }
    
    if(list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }

    list2->next = mergeTwoLists(list1, list2->next);
    return list2;
}
