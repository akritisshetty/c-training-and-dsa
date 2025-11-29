// 4 types of functions:

#include<stdio.h>

// With argument, with return type
int print(int n) {
	return n;
}

// With argument, without return type
void sum(int n) {
	int x = 0;
	for(int i = 1; i <=n; i++) {
		x+=i;
	}
	printf("Sum is: %d\n", x);
}

// Without argument, with return type
int mul() {
	int n, x = 1;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i = 1; i <=n; i++) {
		x*=i;
	}
	return x;
} 

// Without argument, without return type
void table() {
	for(int i = 1; i <= 10; i++) {
		printf("5 x %d = %d\n", i, 5*i);
	}
}

int main(void) {
	int choice, n;
	while(1) {
		printf("\nWhat do you want to do?\n1. Print 1 to n\n2. Sum of n numbers\n3. Multiplication of n numbers\n4. Table of 5\n");
		scanf("%d", &choice);
		switch(choice) {
			case 1: printf("Enter n: \n");
				scanf("%d", &n);
				for(int i = 1; i <= n; i++) {
					printf("%d ", print(i));
				}
				break;
				
			case 2: printf("Enter n: \n");
				scanf("%d", &n);
				sum(n);
				break;
		
			case 3: printf("Multiplication of n numbers is: %d\n", mul());
				break;
			
			case 4: table();
				break;
			
			default: printf("Invalid input\n");
				return 0;
		}
	}
}
