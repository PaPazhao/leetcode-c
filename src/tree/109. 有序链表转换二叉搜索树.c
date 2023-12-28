//https://leetcode.cn/problems/convert-sorted-list-to-binary-search-tree/description/
struct ListNode* getMedian(struct ListNode* left, struct ListNode* right) {
    struct ListNode *fast = left, *slow = left;
    while(fast != right && fast->next != right) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

struct ListNode* buildTree(struct ListNode* left, struct ListNode* right)  {
    if(left == right) {
        return NULL;
    }
    struct ListNode* mid = getMedian(left, right);
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    root->val = mid->val;
    root->left = root->right = NULL;
    root->left = buildTree(left, mid);
    root->right = buildTree(mid->next, right);
    return root;
}

struct TreeNode* sortedListToBST(struct ListNode* head) {
    return buildTree(head, NULL);
}
