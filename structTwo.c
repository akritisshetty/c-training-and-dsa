// Structure Declarations (3 ways)

#include<stdio.h>
#include<string.h>

struct patient {
	int pno;
	char name[10];
	char dept[10];
	char bg[10];
} s1 = {101, "Akriti", "Ortho", "O+ve"}, s2;

int main(void) {
	struct patient s2;
	s2.pno = 102;
	strcpy(s2.name, "Rakshitha");
	strcpy(s2.dept, "Cardio");
	strcpy(s2.bg, "O+ve");
	
	struct patient s3 = {103, "Shraavya", "ENT", "B-ve"};

	printf("Patient Number: %d\nName: %s\nDepartment to Visit: %s\nBlood Group: %s\n", s1.pno, s1.name, s1.dept, s1.bg);
	printf("Patient Number: %d\nName: %s\nDepartment to Visit: %s\nBlood Group: %s\n", s2.pno, s2.name, s2.dept, s2.bg);
	printf("Patient Number: %d\nName: %s\nDepartment to Visit: %s\nBlood Group: %s\n", s3.pno, s3.name, s3.dept, s3.bg);
}
