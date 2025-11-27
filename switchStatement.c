#include<stdio.h>

int main(void) {
	char weather;
	printf("\nWhat's the weather today?\nEnter \ns for sunny\nr for rainy\nb for combination of both sunny and rainy\nn for normal weather\n");
	scanf("%c", &weather);
	
	switch(weather) {
		case 's': { printf("Have drinks, Netflix and Chill\n");
				break;}
		case 'r': printf("Coffee and View\n");
				break;
		case 'b': printf("Dance\n");
				break;
		case 'n': printf("Sleep\n");
				break;
		default: printf("Invalid Weather!\n");
	}
}
