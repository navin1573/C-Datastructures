#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
  Node *head = NULL;
  insert_at_beginning(&head,10);
  insert_at_beginning(&head,20);
  insert_at_beginning(&head,30);
  insert_at_beginning(&head,40);
  insert_at_end(&head,69);
  insert_at_beginning(&head,69);
  print_list(head);
  delete_value(&head,30);
  print_list(head);
  free_list(&head);
}
