/* 
Linear -- line se
1. Stack
2. Queue
3. Linked List -- Single , Double
4. Sorting -- Bubble , Insertion , Selection , Quick
5. Searching Algorithm -- Binary Search algorithm

arr[] = {1,2,3,4,5,6,7,8,9,10,13,17,20}
numbr = 3;
upper_bound = 0
middle_bound = 0
lower_bound = 13 // array length

middle_bound = upper_bound + lower_bound / 2 ; // 6

arr[middle_bound] > number
lower_bound = middle

Non linear 
6. Tree
7. Graph
8. Hashing Algorithms

Space Time Complexity
Best Case
Average Case
Worst Case

*/

#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5,6,7,8,9,10,13,17,20};
    int search = 37;
    
    int ub = 0 , lb = 13 , mb = 0;
    mb = (ub + lb) / 2;
    
    while(ub < lb) {
        
        if(search < arr [mb]) {
            lb = mb -1 ;
        }
        
        else if(search > arr[mb]) {
            ub = mb + 1;
        }
        
        else if(search == arr[mb]) {
            printf("Match found for search item %d",search);
            break;
        }
        
        mb = (ub + lb) / 2;
        
    }
    
    printf("\nEnd search");
    return 0;
}
