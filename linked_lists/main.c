#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"


int main() {
    LinkedList * ll;
    ll = (LinkedList *) malloc(sizeof(LinkedList));  // Es un puntero a un LinkedList
    init_list(ll);
    prepend(ll, 3);
    pop(ll);
    prepend(ll, 4);
    prepend(ll, 13);
    append(ll, 16);
    prepend(ll, 25);
    append(ll, 10);
    for (int i = 0; i < 10; ++i) {
        append(ll, i + 4);
    }
    pop_first(ll);
    printf("%d\n", length(ll));
    print_list(ll);
    Node * retrieved_node = get(ll, 2);
    printf("You have selected node with value %d\n", retrieved_node->val);
}
