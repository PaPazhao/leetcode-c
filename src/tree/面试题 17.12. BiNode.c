//https://leetcode.cn/problems/binode-lcci/description/
struct TreeNode head = {0, NULL,NULL};
struct TreeNode *pre = &head;
void inOrder(struct TreeNode* root) {
    if(root == NULL) return;
    inOrder(root->left);
    pre->right = root;
    pre = root;
    root->left = NULL;
    inOrder(root->right);
}

struct TreeNode* convertBiNode(struct TreeNode* root){
    head.left = NULL;
    head.right = NULL;
    pre = &head;
    inOrder(root);
    return head.right;
}
