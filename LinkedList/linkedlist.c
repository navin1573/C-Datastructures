#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

Node* create(int val){
  Node *nn = (Node *)malloc(sizeof(Node));
  if(nn==NULL){
    perror("allocation failed");
    return NULL;
  }
  nn->val=val;
  nn->next=NULL;
  return nn;
}

void insert_at_beginning(Node **head, int val){
 Node *nn =create(val);
 if(!nn) return;
 nn->next=*head;
 *head=nn;
}
void insert_at_end(Node **head, int val){
    Node *nn = create(val);
    if (!nn) return;
  if(*head==NULL){
    *head=nn;
    return;
  }
  Node *cur = *head;
  while(cur->next!=NULL){
    cur=cur->next;
  }
  cur->next = nn;
}
 void delete_value(Node **head, int val){
  if(*head==NULL){
  printf("List is NULL");
  return;
  }
  Node *prev=*head;
  Node *cur=(*head)->next;
  if(prev->val==val){
    *head=cur;
    printf("%d is deleted\n",val);
    free(prev);
    return;
  }
  while(cur!=NULL && cur->val!=val){
    prev=cur;
    cur=cur->next;
  }
  if(cur==NULL){
    printf("element not found\n");
    return;
  }
    prev->next = cur->next;
    free(cur);
    printf("%d is deleted\n",val);
    return;
  }
  
 void print_list(Node *head){
   Node *cur = head;
   while(cur){
     printf("%d->",cur->val);
     cur=cur->next;
   }
   printf("NULL\n");
 }

void free_list(Node **head) {
    Node *cur = *head;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    *head = NULL;
    printf("memory freed");
}
