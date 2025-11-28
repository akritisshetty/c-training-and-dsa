// Reversing an Array

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, *arr, i;
	printf("Enter number of array elements: ");
	scanf("%d", &num);
	
	arr = (int*) malloc(num * sizeof(int));
	
	printf("\nEnter array elements: ");
	
    	for(i = 0; i < num; i++) {
        	scanf("%d", arr + i);
    	}
	
	int left = 0, right = num - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
        	right--;
	}
	
	for(i = 0; i < num; i++) {
		printf("%d ", *(arr + i));
	}
}
