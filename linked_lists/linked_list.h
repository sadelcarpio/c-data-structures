typedef struct node {
    int val;
    struct node *next;  // Es solo una posicion de memoria. 8 bytes en vez del tamaño de un nodo
} Node;

typedef struct {
    Node *head;
    Node *tail;
} LinkedList;

Node *create_node(int);

void init_list(LinkedList *);

void print_list(LinkedList *);

int length(LinkedList *);

void prepend(LinkedList *, int);

void append(LinkedList *, int);

int pop_first(LinkedList *);

int pop(LinkedList *);

void reverse(LinkedList *);

Node *get(LinkedList *, int);
