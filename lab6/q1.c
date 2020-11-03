#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

   
    ptr = (int *) malloc(n*sizeof(int));

 
    if(ptr == NULL) 
    {
        printf("Error! Memory not allocated\n");
        return 0;
    }

    printf("Enter elements of array:\n");

    for(i = 0; i < n; i++)
    {
     
        scanf("%d", ptr+i);    
        sum = sum + *(ptr + i);
    }

    printf("The elements of the array are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d \n",ptr[i]); 
    }

    printf("The repeated elements in the array are: \n");
    for(int i = 0; i < n; i++) {    
        for(int j = i + 1; j < n; j++) {    
            if(ptr[i] == ptr[j])    
                printf("%d\n", ptr[j]);           
        }    
    }    
  
    free(ptr);
    return 0;
}