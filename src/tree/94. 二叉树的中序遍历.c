void preorder(struct TreeNode *root, int *res, int*size) {
    if(root == NULL) {
        return;
    }
    preorder(root->left, res, size);
    res[(*size)++] = root->val;
    preorder(root->right, res, size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *res = malloc(sizeof(int) * 500);
    *returnSize = 0;
    preorder(root, res, returnSize);
    return res;
}
