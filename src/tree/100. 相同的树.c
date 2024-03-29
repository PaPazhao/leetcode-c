//https://leetcode.cn/problems/same-tree/
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL) {
        return true;
    }
    if((p && q) == NULL) {
        return false;
    }
    if(p->val != q->val) {
        return false;
    }
    if(!isSameTree(p->left, q->left)) {
        return false;
    }
    if(!isSameTree(p->right, q->right)) {
        return false;
    }
    return true;
}
