//https://leetcode.cn/problems/linked-list-random-node/
typedef struct {
    struct ListNode* head;
} Solution;


Solution* solutionCreate(struct ListNode* head) {
    Solution *obj = malloc(sizeof(Solution));
    assert(obj != NULL);
    obj->head = head;
    return obj;
}

int solutionGetRandom(Solution* obj) {
    int i = 1, ans = 0;
    for(struct ListNode *node = obj->head; node; node = node->next) {
        if(rand() % i == 0) {
            ans = node->val;
        }
        i++;
    }
    return ans;
}

void solutionFree(Solution* obj) {
    free(obj);
}
