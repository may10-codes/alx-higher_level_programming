#ifndef LISTS_H
#define LISTS_H

/* Structures */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/* Function Prototypes */
 int is_palindrome(listint_t **head);
Node* create_node(int data);
void insert_node(Node** head, int data);
void delete_node(Node** head, int data);
void print_list(Node* head);

#endif /* LISTS_H */

