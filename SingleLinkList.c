#include <stdio.h>
#include <stdlib.h>

/*
* int -- signed , unsigned
* float
* char
* char[]
* double
* array -- mutiple data types
* pointer
* struct
*
*
* linked list 
* 
*/

struct Node {
    int data;
    struct Node *next; 
} ;

struct Node *head = NULL;
struct Node *walker;

void display() {
    struct Node *tmp  = NULL;
    tmp = head;

    while(tmp != NULL) {
        printf("\n Node value is %d",tmp->data);
        tmp = tmp->next;
    }
}

void add(int data) {

    struct Node *tmp  = (struct Node *)malloc(sizeof(struct Node)); 
    tmp->data = data;
    tmp->next = NULL;

    if(head == NULL) {
        head = tmp;
        walker = head;
    } else {
        walker -> next = tmp ;
        walker = tmp;
    }
}

void main() {
add(1);
display();
}

