//https://leetcode.cn/problems/invert-binary-tree/description/
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL) {
        return root;
    }
    struct TreeNode *left = invertTree(root->right);
    struct TreeNode *right = invertTree(root->left);
    root->left = left;
    root->right = right;
    return root;
}
