// 19. 删除链表的倒数第 N 个结点
// 中等
// https://leetcode.cn/problems/remove-nth-node-from-end-of-list/submissions/407434490/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode tmp = {
        .val = 0, 
        .next = head
    };

    struct ListNode *fast = &tmp;
    struct ListNode *slow = &tmp;
    
    while(n) {
        fast = fast->next;
        n--;
    }

    while(fast && fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    if(slow->next) {
        slow->next = slow->next->next;
    } else {
        slow->next = NULL;
    }
    
    return tmp.next;
}
