#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr; // Will hold the pointer for memory block
    int n, i; 

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()

    ptr = ( int* )malloc( n * sizeof(int) );

    // Check if memory have been successfully allocated

    if ( ptr == NULL ){
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {

        printf("Memory successfully allocated");

        // Get the elements of array
        for ( i = 0; i < n; i++){
            ptr[i] = i + 1;
        } 

        // Print elements of array 
        printf( "The elements of array are : " );

        for ( i = 0; i < n; i++ ){
            printf("%d,", ptr[i]);
        }

    }

}