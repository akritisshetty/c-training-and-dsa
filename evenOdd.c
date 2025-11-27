// Odd Even

#include <stdio.h>
int main(void) {
	int num;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
		printf("\nEven number");
	else 
		printf("\nOdd number");
}
