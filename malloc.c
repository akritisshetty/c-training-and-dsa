// 1 D Array Dynamic Memory Allocation - Malloc & free

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n;
	printf("Enter array size: \n");
	scanf("%d", &n);
	int* arr = (int*) malloc(n*sizeof(int));
	printf("Enter the array elements: \n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\nArray elements (before freeing) are: \n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	free(arr);
	printf("\nArray elements (after freeing) are: \n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}	
}
