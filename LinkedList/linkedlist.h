#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node* create(int val);
void insert_at_beginning(Node **head, int val);
void insert_at_end(Node **head, int val);
void print_list(Node *head);
void delete_value(Node **head, int value);
void free_list(Node **head);
void insert_at_pos(Node **head,int pos,int val);
#endif  // LINKEDLIST_H
