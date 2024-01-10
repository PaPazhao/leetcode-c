//111. 二叉树的最小深度.c
//https://leetcode.cn/problems/minimum-depth-of-binary-tree/description/
int minDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if(left == 0) return right + 1;
    if(right == 0) return left + 1;
    return fmin(left, right) + 1;
}