// Print name 5 times recursively

#include<stdio.h>

int b = 1;

int name(int n, char a[10]) {
	if(b>n) return 0;
	printf("%s\n", a);
	b++;
	name(n, a);
}

int main(void) {
	int n;
	char a[10];
	printf("Enter my name: \n");
	scanf("%s", a);
	printf("How many times do you want to print my name?\n");
	scanf("%d", &n);
	name(n, a);
}
