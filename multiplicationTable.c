// Multiplication Table

#include<stdio.h>
int main(void) {
	int n, m;
	printf("\nEnter the number: ");
	scanf("%d", &n);
	printf("\nTill what mutliple should the table be printed? ");
	scanf("%d", &m);
	for(int i = 1; i <= m; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}
