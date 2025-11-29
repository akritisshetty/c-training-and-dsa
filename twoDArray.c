// 2-D Array (Matrix)

#include<stdio.h>
int main(void) {
	int n, m;
	printf("Enter m and n: \n");
	scanf("%d %d", &m, &n);
	
	int arr[m][n];
	
	printf("\nEnter matrix elements:\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nThe matrix elements are:\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
