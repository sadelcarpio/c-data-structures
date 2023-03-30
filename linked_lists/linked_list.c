#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Node creation
Node *create_node(int val) {
    Node *new_node;
    new_node = (Node *) malloc(sizeof(Node));  // Esto es un puntero con memoria alocada
    // Se castea un void pointer (puntero que no tiene un tipo de dato) al tipo Node *
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

// Linked list creation
void init_list(LinkedList *ll) {
    ll->head = NULL;
    ll->tail = NULL;
}

void print_list(LinkedList *ll) {
    Node *node;

    if (ll->head == NULL) {
        printf("Empty List\n");
        return;
    }
    node = ll->head;
    printf("Linked List:\n");
    while (node != NULL) {
        printf("|  %d  |", node->val);
        node = node->next;
        if (node != NULL) {
            printf("-->");
        }
    }
    printf("\n");
}

int length(LinkedList *ll) {
    int len = 0;
    Node *temp;
    temp = ll->head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void prepend(LinkedList *ll, int val) {
    Node *node;
    node = create_node(val);
    if (ll->head == NULL) {
        ll->head = node;
        ll->tail = node;
    } else {
        node->next = ll->head;
        ll->head = node;
    }
}

void append(LinkedList *ll, int val) {
    Node *node;
    node = create_node(val);
    if (ll->head == NULL) {
        ll->head = node;
        ll->tail = node;
    } else {
        ll->tail->next = node;
        ll->tail = node;
    }

}

int pop_first(LinkedList *ll) {
    Node *temp;
    if (ll->head == NULL) {
        printf("Empty List\n");
        return -1;
    }
    temp = ll->head;
    ll->head = temp->next;
    temp->next = NULL;
    return temp->val;
}

int pop(LinkedList *ll) {
    Node *temp, *prev;  // Pointers can be declared in one line
    if (ll->head == NULL) {
        printf("Empty List.\n");
        return -1;
    }
    prev = ll->head;
    if (prev->next == NULL)  // If the ll only has one node
    {
        ll->head = NULL;
        ll->tail = NULL;
        return prev->val;
    }
    temp = ll->head->next;
    while (temp->next != NULL) {
        temp = temp->next;
        prev = prev->next;
    }
    prev->next = NULL;
    return temp->val;
}

Node *get(LinkedList *ll, int index) {
    Node *temp;
    temp = ll->head;
    if (index < 0 || index >= length(ll)) {
        printf("Invalid index.\n");
        return NULL;
    }
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp;
}

void reverse(LinkedList *ll) {
    Node *temp = ll->head;
    Node *after = ll->head->next;
    Node *before = NULL;
    ll->tail = temp;
    while (temp != NULL) {
        temp->next = before;
        before = temp;
        temp = after;
        if (temp == NULL)
            ll->head = before;
        else
            after = after->next;
    }
}
