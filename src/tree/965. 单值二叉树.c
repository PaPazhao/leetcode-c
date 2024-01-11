/// https://leetcode.cn/problems/univalued-binary-tree/
bool isUnivalTree(struct TreeNode* root) {
    if(root == NULL) {
        return true;
    }
    if(root->left) {
        if(root->val != root->left->val || !isUnivalTree(root->left)) {
            return false;
        }
    }
    if(root->right) {
        if(root->val != root->right->val || !isUnivalTree(root->right)) {
            return false;
        }
    }
    return true;
}