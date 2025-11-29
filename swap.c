#include<stdio.h>
int main(void) {
	int a,b;
	printf("Enter a and b: ");
	scanf("%d%d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\na = %d, b = %d", a, b);
}
