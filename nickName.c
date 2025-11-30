// typedef

#include<stdio.h>
#include<string.h>
typedef struct {
	int age;
	char name[10];
} stu;

int main(){
	stu s;
	s.age = 10;
	strcpy(s.name, "Akriti");
	printf("%d, %s", s.age, s.name);
}
