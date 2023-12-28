//https://leetcode.cn/problems/delete-node-in-a-linked-list/description/
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
