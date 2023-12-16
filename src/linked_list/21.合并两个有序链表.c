struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode tmp = {0, NULL};
    struct ListNode *cur = &tmp;

    while(list1 && list2) {
        if(list1->val < list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        } 
        cur = cur->next;
    }

    if(list1) {
        cur->next = list1;
    } else if(list2) {
        cur->next = list2;
    }

    return tmp.next;
}
