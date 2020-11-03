#include <stdio.h>
int insert(){
 int array[100], position, c, n, value;
 printf("\t Insertion of element in array\n");
 printf("Enter number of elements in array\n");
 scanf("%d", &n);
 printf("Enter %d elements\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Enter the location where you wish to insert an element\n");
 scanf("%d", &position);
 printf("Enter the value to insert\n");
 scanf("%d", &value);
 for (c = n - 1; c >= position - 1; c--)
 array[c+1] = array[c];
 array[position-1] = value;
 printf("Resultant array is\n");
 for (c = 0; c <= n; c++)
 printf("%d ", array[c]);
 return 0;
}
int delete(){
 int array[100], position, c, n;
 printf("\n\tRemoval of element from array\n");

 printf("Enter number of elements in array\n");
 scanf("%d", &n);
 printf("Enter %d elements\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Enter the location where you wish to delete element\n");
 scanf("%d", &position);
 if (position >= n+1)
 printf("Deletion not possible.\n");
 else
 {
 for (c = position - 1; c < n - 1; c++)
 array[c] = array[c+1];
 printf("Resultant array:\n");
 for (c = 0; c < n - 1; c++)
 printf("%d\n", array[c]);
 }

}
int sum(){
 printf("\n \t sum of even and odd elements of array separately\n ");

 int i;
 int num;
 int odd_sum = 0;
 int even_sum = 0;
 printf("Enter the value of num\n");
 scanf("%d", &num);
 for (i = 1; i <= num; i++)
 {
 if (i % 2 == 0)
 even_sum = even_sum + i;
 else
 odd_sum = odd_sum + i;
 }
 printf("Sum of all odd numbers = %d\n", odd_sum);
 printf("Sum of all even numbers = %d\n", even_sum);
}
int concat(){
 #define N 5
 #define M (N * 2)
 int a[N], b[N], c[M], i, index = 0;

 printf("Enter %d integer numbers, for first array\n", N);
 for(i = 0; i < N; i++)
 scanf("%d", &a[i]);

 printf("Enter %d integer numbers, for second array\n", N);
 for(i = 0; i < N; i++)
 scanf("%d", &b[i]);

 printf("\nMerging a[%d] and b[%d] to form c[%d] ..\n", N, N, M);
 for(i = 0; i < N; i++)
 c[index++] = a[i];

 for(i = 0; i < N; i++)
 c[index++] = b[i];

 printf("\nElements of c[%d] is ..\n", M);
 for(i = 0; i < M; i++)
 printf("%d\n", c[i]);
}
int main(){
 insert();
 delete();
 sum();
 concat();

}