typedef struct node {
    int val;
    struct node *next;
    struct node *prev;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} DoublyLinkedList;

Node *create_node(int val);

void init_list(DoublyLinkedList *dll);

void print_list(DoublyLinkedList *dll, bool reverse);

void append(DoublyLinkedList *dll, int val);

void prepend(DoublyLinkedList *dll, int val);

void reverse(DoublyLinkedList *dll);
