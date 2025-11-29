// Print name 5 times recursively

#include<stdio.h>

int a = 1;

int name(int n) {
	if(a>n) return 0;
	printf("Akriti\n");
	a++;
	name(n);
}

int main(void) {
	name(5);
}
