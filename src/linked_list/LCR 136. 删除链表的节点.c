//LCR 136. 删除链表的节点
//https://leetcode.cn/problems/shan-chu-lian-biao-de-jie-dian-lcof/description/
struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode dump = {0, head};
    struct ListNode *cur = &dump;

    while(cur->next) {
        if(cur->next->val != val) {
            cur = cur->next;
            continue;
        }
        cur->next = cur->next->next;
        break;
    }
    return dump.next;
}
