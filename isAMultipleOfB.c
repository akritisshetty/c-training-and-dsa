// Is A a multiple of B?

#include<stdio.h>
int main(void) {
	int a, b;
	printf("\nIs A a multiple of B? \nEnter A and B: ");
	scanf("%d%d", &a, &b);
	
	if(a%b == 0) {
		printf("\nYes %d is a multiple of %d", a, b);
	} else {
		printf("Not a multiple!");
	}
}
