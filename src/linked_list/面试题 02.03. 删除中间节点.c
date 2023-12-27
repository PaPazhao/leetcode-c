//https://leetcode.cn/problems/delete-middle-node-lcci/description/
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
