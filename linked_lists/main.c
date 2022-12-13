#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"


int main() {
    LinkedList * ll;
    ll = (LinkedList *) malloc(sizeof(LinkedList));
    init_list(ll);
    prepend(ll, 3);
    pop(ll);
    prepend(ll, 4);
    prepend(ll, 13);
    append(ll, 16);
    prepend(ll, 25);
    pop_first(ll);
    printf("%d\n", length(ll));
    print_list(ll);
    Node * retrieved_node;
    retrieved_node = get(ll, 1);
    printf("You have selected node %d\n", retrieved_node->val);
}
