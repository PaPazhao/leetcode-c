//https://leetcode.cn/problems/same-tree/
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(NULL == p && NULL == q) {
        return true;
    }
    if(p && NULL == q) {
        return false;
    }
    if(q && NULL == p) {
        return false;
    }
    if(p->val != q->val) {
        return false;
    }
    return isSameTree(p->left, q->left) &&  isSameTree(p->right, q->right);
}
