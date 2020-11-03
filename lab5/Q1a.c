#include<stdio.h>

int main(){
	int array[10], position, i, x, value;
	printf("Enter number of elements in array\n");
	scanf("%d", &x); 

	printf("Enter %d elements\n", x);

	for(i=0; i<x; i++)
		scanf("%d", &array[i]);

	printf("Enter the loaction of elements where you want to insersert\n");
	scanf("%d", &position);

	printf("Enter the value to insert\n");
	scanf("%d", &value);

	for(i=x-1; i>=position-1; i--)
		array[i+1]=array[i];

		array[position-1]=value;
		
	printf("Resultant array is\n");

	for(i=0; i<=x; i++)
		printf("%d\n", array[i]);

	return 0;
}