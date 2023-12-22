bool dfs(struct TreeNode *left, struct TreeNode *right) {
    if(left == NULL && NULL == right) {
        return true;
    }
    if(left == NULL || right == NULL) {
        return false;
    }
    if(left->val != right->val) {
        return false;
    }

    return dfs(left->left, right->right) && dfs(left->right, right->left);
} 

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) {
        return true;
    }
    return dfs(root->left, root->right);
}
