// Online C compiler to run C program online
#include <stdio.h>

#define STACK_SIZE 3

/*
* STACK using Array
*. STACK -- Last In First Out (LIFO)
*  push -- to add data to stack
*  pop -- to remove data from stack
*  tos -- to view / peek data on top of stack
*  display -- show contents of stack
*
*/

int tos = -1; // top of stack

int main() {
    
    int stack[STACK_SIZE];
    int i = 0;
    
    for(i=0;i<STACK_SIZE;i++) {
        stack[i] = 0;
    }
    
    push(stack,1);
    push(stack,2);
    push(stack,3);
    push(stack,4);
    
    display(stack);
    
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    
    display(stack);
    

    return 0;
}

void push(int array[],int data) {
    if( tos >= STACK_SIZE -1 ) {
        printf("\n Overflow Error");
        return;
    }
    tos++;
    array[tos] = data;
    printf("\nPush %d onto stack",data);
} 

int pop(int array[]) {
    int data = array[tos];
    
    if(tos == -1) {
        printf("\n Underflow Error");
        return -1;
    }
    
    tos--;
    printf("\nPop %d from stack",data);
    return data;
} 

void display(int array[]) {
    int i = 0;
    
    if(tos == -1) {
        printf("\nStack is Empty");
    }
    
    for(i=0;i<=tos;i++) {
        printf("\nStack[%d] = %d",i,array[i]);
    }
    printf("\n\n");
}

