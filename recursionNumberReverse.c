// Printing n to 1 recursively

#include<stdio.h>
int a = 1;
int rev(int n) {
	if(n==0) return 0;
	printf("%d ", n);
	rev(n-1);
}
int number(int n) {
	if(a>n) return 0;
	printf("%d", n);
	number(a++);
}
int main() {
	int n;
	printf("Enter n: ");	
	scanf("%d", &n);
	printf("Numbers:\n");
	number(n);
	printf("\nReverse numbers:\n");
	rev(n);
}
