// 116. 填充每个节点的下一个右侧节点指针
// 中等
// https://leetcode.cn/problems/populating-next-right-pointers-in-each-node/description/

void connectTree(struct Node* left, struct Node* right) {
    if(left == NULL && right == NULL) {
        return;
    } 
    if(left && right){
        left->next = right;
        connectTree(left->left, left->right);
        connectTree(left->right, right->left);
        connectTree(right->left, right->right);
    }
}

struct Node* connect(struct Node* root) {
    if(NULL == root) {
        return root;
    }
    
    connectTree(root->left, root->right);
    return root;
}