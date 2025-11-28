// Bitwise Operations - &(AND), |(OR), ~(NOT), ^(XOR), <<(Left Shift), >> (Right Shift)

#include<stdio.h>
int main(void) {
	int a = 5, b = 10;
	printf("AND: %d\n", a&b);
	printf("OR: %d\n", a|b);
	printf("XOR: %d\n", a^b);
	printf("NOT (a): %d\n", ~a);
	printf("NOT (b): %d\n", ~b);
	printf("Left Shift (5 << 2): %d\n", a << 2);
	printf("Right Shift (5 >> 2): %d\n", a >> 2);
}
