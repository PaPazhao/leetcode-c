// https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/
int depth = 0;
int res = 0;
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
    // bug? 必须再这里初始化为 0 , 不然case [1, null, 2] 的结果为3 
    depth = 0;
    res = 0;
    traverse(root);
    return res;
}
