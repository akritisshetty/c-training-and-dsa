// Reversing an array using for loop

#include<stdio.h>
int main(void) {
	int n;
	printf("Enter number of array elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter array elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int rev[n];
	for(int i = 0, j = n-1; i <= n-1, j >= 0; i++, j--) {
		rev[j] = arr[i];
	}
	printf("\nReverse array is: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", rev[i]);
	}
}
