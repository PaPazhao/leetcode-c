void traversal(struct TreeNode *root, int *res, int*size) {
    if(root == NULL) {
        return;
    }
    traversal(root->left, res, size);
    res[(*size)++] = root->val;
    traversal(root->right, res, size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = malloc(sizeof(int) * 100);
    traversal(root, result, returnSize);
    return result; 
}
