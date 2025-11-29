// Matrix Multiplication

#include<stdio.h>
int main(void) {
	int m, n, p, q;
	int i, j, k, sum;
	int a[10][10], b[10][10], c[10][10];
	
	printf("Enter the dimensions of first matrix: \n");
	scanf("%d%d", &m, &n);
	
	printf("Enter the first matrix elements: \n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the dimensions of second matrix: \n");
	scanf("%d%d", &p, &q);
	
	if(n!=p) {
		printf("Cannot multiply the two matrices!!\n");
		return 0;
	} else {
		printf("Enter the second matrix elements: \n");
		for(i = 0; i < p; i++) {
			for(j = 0; j < q; j++) {
				scanf("%d", &b[i][j]);
			}
		}
	}
	
	for(i = 0; i < m; i++) {
		for(j = 0; j < q; j++) {
			sum = 0;
			for(k = 0; k < n; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	
	printf("The product of first and second matrices is: ");
	for(i = 0; i < m; i++) {
		for(j = 0; j < p; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}		
}
