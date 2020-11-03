
#include <stdio.h>

int main(){
	int array[10], position, i, x;

	printf("Enter the elements in array\n");
	scanf("%d", &x);

	printf("Enter the array elements\n");

	for(i=0; i<x; i++)
		scanf("%d", &array[i]);

	printf("Enter the position of the Element\n");
	scanf("%d", &position);

	if(position>=x+1)
		printf("\nDeletion is not possible.\n");
	else{
		for(i=position-1; x<i; i++)
			array[i]=array[i+1];
		printf("\nArray after the deletion");

		for(i=0; i<x-1; i++)
			printf("%d\n", array[i]);
	}
	return 0;

}
