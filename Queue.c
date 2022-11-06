// Online C compiler to run C program online
#include <stdio.h>
#define QUEUE_SIZE 5

/*
*  Queue using Array
*  Queue -- First In First Out (FIFO)
*  enqueue -- to add data to queue
*  dequeue -- to remove data from queue
*  peek -- to view / peek data on top of queue
*  display -- show contents of queue
*
* queue {}
* queue , data 1
* rear = 0 , queue[rear] = data
* queue , data 2
* rear = 1 , queue[rear] = data
* queue , data 3
* rear = 2 , queue[rear] = data
* queue , pop
* front = 1, queue[front] 
*
*/

int front = -1;
int rear = -1;

void display(int array[]) {
    int i ;
    printf("\nDisplaying Queue contents : ")
    for(i = front+1;i <= rear;i++) {
        printf("\nQueue[%d] = %d",i,array[i]);
    }
    
    printf("\n\n");
}

void enqueue(int array[],int data) {
    if(rear >= QUEUE_LENGTH-1) {
        
        if(front == -1) {
            printf("\n Queue is full");
            return;            
        }

    }
    rear++;
    array[rear] = data;
    printf("\nPushing %d onto queue",data);
}

void dequeue(int array[]) {
    front++;
    printf("\nRemoving %d from queue",array[front]);
}

int main() {
    // Write C code here
    int queue[QUEUE_SIZE];
    int i=0;
    
    for(i=0;i<QUEUE_SIZE;i++) {
        queue[i] = 0;    
    }
    
    enqueue(queue,1);
    enqueue(queue,2);
    enqueue(queue,3);
    
    display(queue);
    
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    
    display(queue);
    

    return 0;
}
