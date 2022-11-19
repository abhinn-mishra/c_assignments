#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next; 
    struct Node *prev;
} ;

struct Node *head = NULL;
struct Node *walker;

void display() {
    struct Node *tmp  = NULL;
    tmp = head;

    if(head == NULL) {
        printf("\n List is EMPTY");
        return;
    }

    while(tmp != NULL) {
        printf("\n Node value is %d",tmp->data);
        tmp = tmp->next;
    }
}

void add(int data) {

    struct Node *tmp  = (struct Node *)malloc(sizeof(struct Node)); 
    tmp->data = data;
    tmp->prev = NULL;
    tmp->next = NULL;

    if(head == NULL) {
        head = tmp;
        walker = head;
    } else {
        walker->next = tmp ;
        tmp->prev = walker; 
        walker = tmp;
    }
}

void delete(int data) {
    struct Node *tmp  = NULL;

    tmp = head;

    while(tmp != NULL) {

      // data to be deleted found in the linked list
    if(data == tmp->data) {
    
        // Logic to delete first/HEAD node
        if(tmp == head) {
            printf("\n Deleting HEAD node %d",tmp->data);
            if(head->next != NULL) {
                head = head->next;
                head->prev = NULL;
            } else {
                head = NULL;
            }
            
            tmp->next = NULL;
            
            // free(tmp);
            break;
        }

         // Logic to delete last/TAIL node
        else if(tmp->next == NULL) {
            printf("\n Deleting LAST node %d",tmp->data);
            tmp = tmp->prev;
            tmp->next->prev = NULL;
            tmp->next = NULL;
            // free(tmp);
            break;
        } 

        // Logic to delete middle nodes
        else {
            printf("\n Deleting Middle node %d",tmp->data);
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            tmp->next = NULL;
            tmp->prev = NULL;
            // free(tmp);
            break;
        }

    } 
        
        tmp = tmp->next;
    }

}

void main() {

// printf("Size of struct Node --> %ld",sizeof(struct Node));
// printf("Size of Integer --> %ld",sizeof(int));
add(1);
add(2);
add(3);
add(4);
add(5);

display();

delete(1);
display();

delete(5);
display();

delete(3);
display();

delete(2);
display();

delete(4);
display();

}