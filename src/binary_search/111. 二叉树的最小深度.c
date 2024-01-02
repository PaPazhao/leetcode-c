//https://leetcode.cn/problems/minimum-depth-of-binary-tree/description/
int minDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int left = minDepth(root->left) + 1;
    int right = minDepth(root->right) + 1;
    if(left == 1) return right;
    if(right == 1) return left;
    return left < right ? left : right;
}
