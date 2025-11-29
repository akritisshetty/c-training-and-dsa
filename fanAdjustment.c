// Fan Adjustment with given conditions

#include<stdio.h>
int main(void) {
	int temp, hum;	
	while(1){
		printf("\nEnter the room temperature and humidity: ");
		scanf("%d %d", &temp, &hum);
		if(temp > 30) {
			if(hum > 60) {
				printf("\nHigh speed");
			} else {
				printf("\nMedium speed");
			}
		} else {
			if(hum > 60) {
				printf("\nMedium speed");
			} else {
				printf("\nLow speed");
			}
		}
	}
}
