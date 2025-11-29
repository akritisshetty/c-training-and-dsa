// All Without Argument, Without Return Type

#include<stdio.h>

// Without argument, without return type
int print() {
	int n;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i = 0; i <= n; i++) {
	printf("%d ", i);
	}
}

// Without argument, without return type
void sum() {
	int n, x = 0;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i = 1; i <=n; i++) {
		x+=i;
	}
	printf("Sum is: %d\n", x);
}

// Without argument, without return type
int mul() {
	int n, x = 1;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i = 1; i <=n; i++) {
		x*=i;
	}
	printf("Multiplication of n numbers is: %d\n", x);
} 

// Without argument, without return type

void table() {
	for(int i = 1; i <= 10; i++) {
		printf("5 x %d = %d\n", i, 5*i);
	}
}

int main(void) {
	int choice, n;
	printf("What do you want to do?\n1. Print 1 to n\n2. Sum of n numbers\n3. Multiplication of n numbers\n4. Table of 5\n");
	scanf("%d", &choice);
	switch(choice) {
		case 1: print();
			break;
			
		case 2: sum();
			break;
		
		case 3: mul();
			break;
			
		case 4: table();
			break;
			
		default: printf("Invalid input\n");
	}
}
