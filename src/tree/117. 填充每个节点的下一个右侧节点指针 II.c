//https://leetcode.cn/problems/populating-next-right-pointers-in-each-node-ii/
struct Node* connect(struct Node* root) {
	if(root == NULL) {
        return root;
    }
    struct Node *cur = root;

    while(cur) {
        struct Node dummy = {0, NULL, NULL, NULL};
        struct Node *pre = &dummy;
        while(cur) {
            if(cur->left) {
                pre->next = cur->left;
                pre = pre->next;
            }
            if(cur->right) {
                pre->next = cur->right;
                pre = pre->next;
            }
            cur = cur->next;
        }

        cur = dummy.next;
    }
    return root;
}
