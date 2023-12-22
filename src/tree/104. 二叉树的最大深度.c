// https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/
int depth;
int res;
void traverse(struct TreeNode* root) {
    if(root == NULL) {
        return;
    }

    depth++;
    if((NULL == (root->left)) && (NULL == root->right )) {
        if(depth > res) {
            res = depth;
        } 
    }
    traverse(root->left);
    traverse(root->right);
    depth--;
}

int maxDepth(struct TreeNode* root) {
    depth = 0;
    res = 0;
    traverse(root);
    return res;
}


// 2 --------------------------------------------------------------
int maxDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int left = maxDepth(root->left) + 1;
    int right = maxDepth(root->right) + 1;

    return left > right ? left : right;
}
