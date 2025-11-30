// Enumerations

#include<stdio.h>

enum WeekDays {
	SUNDAY, MONDAY = 'a', TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main(void){
	enum WeekDays today = SUNDAY;
	printf("%d\n", today);
	enum WeekDays tomorrow = MONDAY;
	printf("%c\n%d\n", tomorrow, tomorrow);
}
