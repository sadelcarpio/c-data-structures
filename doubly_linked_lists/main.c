#include <stdbool.h>
#include "stdlib.h"
#include "dll.h"

int main() {
    DoublyLinkedList *dll;
    dll = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
    init_list(dll);
    append(dll, 5);
    append(dll, 6);
    append(dll, 7);
    prepend(dll, 8);
    reverse(dll);
    print_list(dll, false);
}
