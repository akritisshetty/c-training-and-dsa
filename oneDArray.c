// 1-D Array Marks Display

#include<stdio.h>
int main(void) {
	int n; 
	printf("Enter the number of students in class: \n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter marks for each student:\n");
	for(int i = 0; i < n; i++) {
		printf("\nMarks for student %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nMarks scored by each student: ");
	for(int i = 0; i < n; i++) {
		printf("Marks scored by student %d is: %d\n", i+1, arr[i]);
	}
}
