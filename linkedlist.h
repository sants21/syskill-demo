#define SUCCESS_LL 10
#define NULL_LIST_LL 21
#define NULL_DATA_LL 42
#define EMPTY_LIST_LL 101

typedef struct node_t {
    void *data;
    struct node_t *next;
} node;

typedef struct {
    node *head;
    node *tail;
    int count;
} linkedlist;

int initList(linkedlist *l);
int insertFront(linkedlist *l, void *data);
int removeFront(linkedlist *l, void **data);
int destroyList(linkedlist *l);
