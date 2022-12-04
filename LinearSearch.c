#include <stdio.h>

void main() {

int arr[] = {3,6,78,98,1,2,33};
int i = 0;
char matchFound = 'N';
int searchQuery = 33;
for (i=0; i<7; i++){
    if(arr[i]==searchQuery) {
        printf("Match found for query %d",searchQuery);
        matchFound = 'Y';
        break;
    }
  }

  if(matchFound != 'Y') {
    printf("No match found for query %d",searchQuery);
  }
}
