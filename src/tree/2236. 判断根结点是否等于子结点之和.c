//2236. 判断根结点是否等于子结点之和
//https://leetcode.cn/problems/root-equals-sum-of-children/?envType=daily-question&envId=2024-01-14
bool checkTree(struct TreeNode* root){
    return root->left->val + root->right->val == root->val;
}