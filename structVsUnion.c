// Struct vs Union

#include<stdio.h>
#include<string.h>

struct student {
	int age;
	char name[10];
} s;

union employee {
	int age;
	char name[10];
} u = {20, "Akriti"};

int main(void) {
	s.age = 10;
	strcpy(s.name, "Akriti");
	printf("%d, %s\n", s.age, s.name);
	
	
	printf("%d, %s", u.age, u.name);
}
