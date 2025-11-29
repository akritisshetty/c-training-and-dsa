// String Manipulation Functions

#include<stdio.h>
#include<string.h>
int main(void) {
	char a[10] = "Rusk";
	char b[10] = "itha";
	printf("String Concatenation: %s\n", strcat(a, b));
	printf("String Copy: %s\n", strcpy(a, b));
	char c[10] = "Rusk";
	char d[10] = "itha";
	printf("String Length: %ld\n", strlen(b));
	printf("String Compare: %d\n", strcmp(d, c));
}
