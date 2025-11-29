#include<stdio.h>
int main(void) {
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter array elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for(int i = 0; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	printf("\nThe minimum element is %d", min);
}
