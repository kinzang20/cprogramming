#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    int *ptr, *ptr1; 
    int n, i; 
  
    // Get the number of elements for the array 
     
    printf("Enter number of Elements: \n");
    scanf("\n%d", &n);
  
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
  
    // Dynamically allocate memory using calloc() 
    ptr1 = (int*)calloc(n, sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL || ptr1 == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
  
        
        // Memory has been successfully allocated 
        printf("\nMemory successfully allocated using calloc.\n"); 


        // Free the memory 
        free(ptr); 
        printf("\nMalloc Memory successfully de-allocated.\n"); 
  
        free(ptr1); 
        printf("\nCalloc Memory successfully de-allocated.\n"); 
    } 
  
    return 0; 
}