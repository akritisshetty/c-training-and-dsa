// 18 and above, can marry
// less than 18, can't marry

// Nested if else

#include <stdio.h>
int main(void) {
	int age;
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	if(age >= 18) {
		if(age >= 30) {
			printf("\nToo old to get married");
		} else {
			printf("\nCan get married");
		}
	} else {
		if(age <= 5) {
			printf("\nNoooo! You're a baby");
		} else {
			printf("\nChild marriage");
		}
	}
}
