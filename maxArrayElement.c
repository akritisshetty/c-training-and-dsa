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
	int max = arr[0];
	for(int i = 0; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("\nThe maximum element is %d", max);
}
