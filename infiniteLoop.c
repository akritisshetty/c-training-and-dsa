// Infinite Loop

#include<stdio.h>
int main(void) {
	int age;
	// for(;;) {}
	while(1) {
		printf("\nEnter age: ");
		scanf("%d", &age);
		if(age > 18) {printf("\nVote");}
		else {printf("Not eligible");}
	}
}
