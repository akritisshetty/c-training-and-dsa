// Unconditional Statement - break

#include<stdio.h>
int main(void) {
	printf("Hello!");
	for(int i = 1; i <= 3; i++) {
		if(i == 2) {
			break;
		}
		printf("\n%d", i);
	}
	printf("\nByeee!");
}
