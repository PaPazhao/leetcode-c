/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */
//https://leetcode.cn/problems/populating-next-right-pointers-in-each-node/
struct Node* connect(struct Node* root) {
    if(root == NULL) return NULL;
    root->next = NULL;

	struct Node dummp = {
        .val = 0, 
        .left = NULL, 
        .right = NULL, 
        .next = root->left
    };
    struct Node *pre = root;
    
    while(dummp.next) { 
        dummp.next = pre->left;
        struct Node *cur = &dummp;
        while(pre) { 
            cur->next = pre->left;
            pre->left->next = pre->right;
            cur = pre->right;
            pre->right->next = NULL;
            pre = pre->next;
        }
        pre = dummp.next;
        dummp.next = pre->left; 
    }
    return root;
}