// 1 D Array Dynamic Memory Allocation - calloc & free

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n;
	printf("Enter array size: \n");
	scanf("%d", &n);
	int* arr = (int*) calloc(n, sizeof(int));
	printf("Enter the array elements: \n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Array elements are: \n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	free(arr);
	
	printf("\nArray elements are: \n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
}
