int countNodes(struct TreeNode* root) {
    struct TreeNode *left = root, *right = root;
    int leftHeight = 0, rightHeight = 0;
    while(left != NULL) {
        left = left->left;
        leftHeight++;
    }
    while(right != NULL) {
        right = right->right;
        rightHeight++;
    }

    if(leftHeight == rightHeight) {
        return pow(2, leftHeight) - 1;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}
