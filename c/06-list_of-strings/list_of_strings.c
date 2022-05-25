#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRLEN 100

struct node{
    char * userstr;
    struct node * next_ptr;
};


void print_ll(struct node * linkedlist_ptr){
    struct node * current = linkedlist_ptr;

    printf("User entered strings: ");
    while (current != NULL){
      printf("%s ", current -> userstr);
      current = current -> next_ptr;
    }
    printf("\n");
}

void del_ll(struct node * linkedlist_ptr){
    struct node * current = linkedlist_ptr;
    struct node * next;

    if (current == NULL){
      return;
    }

    while(current != NULL){
      next = current -> next_ptr;
      free(current);
      current = next;
    }
}


struct node * add_str_to_ll(struct node * linkedlist_ptr, char * userstr){
    struct node * current = linkedlist_ptr;
    struct node * next;
    struct node * new_node_ptr = malloc(sizeof(struct node));


    new_node_ptr -> userstr = malloc (sizeof(char) * strlen(userstr));
    strcpy(new_node_ptr -> userstr, userstr);

    new_node_ptr -> next_ptr = NULL;

    if (linkedlist_ptr == NULL){
        return new_node_ptr; 
    }

    current = linkedlist_ptr;
    next = current -> next_ptr;

    while(next != NULL){
        current = next;
        next = current -> next_ptr;
    }
    current -> next_ptr = new_node_ptr;
    return linkedlist_ptr;
}




void rstrip(char * mystr){
  int mylen = strlen(mystr);
  while (mylen>0){
    switch (mystr[mylen-1]){
      case ' ':
      case '\n':
      case '\r':
        mystr[mylen-1] = '\0';
      default:
        return;
    }
  }
}


int main(){
  struct node * linkedlist_ptr = NULL;
  char input_str [MAX_STRLEN] = "";
  
  while (strcmp(input_str, "-1") != 0){
    printf("Enter a string (-1 to quit): ");
    fgets(input_str, MAX_STRLEN, stdin);
    rstrip(input_str);
    linkedlist_ptr = add_str_to_ll(linkedlist_ptr, input_str);
    print_ll(linkedlist_ptr);
  }
  del_ll(linkedlist_ptr);
}





