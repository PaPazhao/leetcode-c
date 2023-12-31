/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */
struct MapItem {
    struct Node* old;
    struct Node* new;
};

struct Map {
    int size;
    struct MapItem items[1000];
};

struct MapItem* has(struct Map *map, struct Node *node) {
    for(int i = 0; i < map->size; i++) {
        if(map->items[i].old == node) {
            return &map->items[i];
        }
    }
    return NULL;
}

void addItem(struct Map *map, struct Node *old, struct Node *new) {
    map->items[map->size].old = old;
    map->items[map->size].new = new;
    map->size++;
}

struct Node* copyRandomList(struct Node* head) {
    if(head == NULL) return NULL;
    struct Map* map = malloc(sizeof(struct Map));
    map->size = 0;

    for(struct Node *p = head; p != NULL; p = p->next) {
        if(has(map, p) == NULL) {
            struct Node *new = malloc(sizeof(struct Node));
            new->val = p->val;
            new->next = NULL;
            new->random = NULL;
            addItem(map, p, new);
        }
    }
    struct Node *ret = NULL;
    for(struct Node *p = head; p != NULL; p = p->next) {
        if(p->next != NULL) {
            has(map, p)->new->next = has(map, p->next)->new;
        }
        if(p->random != NULL) {
            has(map, p)->new->random = has(map, p->random)->new;
        }
 
    }
    ret = map->items[0].new;
    free(map);
    return ret;
}
