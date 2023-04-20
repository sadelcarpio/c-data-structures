#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include "dll.h"

Node *create_node(int val) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->val = val;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void init_list(DoublyLinkedList *dll) {
    dll->head = NULL;
    dll->tail = NULL;
}

void print_list(DoublyLinkedList *dll, bool reverse) {
    if (dll->head == NULL) printf("Empty List.\n");
    else {
        reverse ? printf("Reversed Doubly Linked List:\n") : printf("Doubly Linked List:\n");
        Node *temp = reverse ? dll->tail : dll->head;
        while (temp != NULL) {
            printf("| %d |", temp->val);
            temp = reverse ? temp->prev : temp->next;
            if (temp != NULL) printf("<-->");
        }
    }
}

void append(DoublyLinkedList *dll, int val) {
    Node *node = create_node(val);
    if (dll->tail == NULL && dll->head == NULL) {
        dll->tail = node;
        dll->head = node;
    } else {
        dll->tail->next = node;
        node->prev = dll->tail;
        dll->tail = node;
    }
}

void prepend(DoublyLinkedList *dll, int val) {
    Node *node = create_node(val);
    if (dll->tail == NULL && dll->head == NULL) {
        dll->tail = node;
        dll->head = node;
    } else {
        dll->head->prev = node;
        node->next = dll->head;
        dll->head = node;
    }
}

void reverse(DoublyLinkedList *dll) {
    Node *temp = dll->tail;
    Node *guard = dll->tail->prev;
//    while (temp != NULL) {
//    }
}
