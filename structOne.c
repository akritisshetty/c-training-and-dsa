// Struct : One Way

#include <stdio.h>

struct employee {
    char name[10];
    int empid;
    float salary;
    char bg[5];
};

int main(void) {
    struct employee e[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter employee %d details:\n", i + 1);
        
        printf("Enter name:\n");
        scanf("%9s", e[i].name);

        printf("Enter empid:\n");
        scanf("%d", &e[i].empid);

        printf("Enter salary:\n");
        scanf("%f", &e[i].salary);

        printf("Enter bg:\n");
        scanf("%4s", e[i].bg);
    }

    printf("\n\nPrinting employee details...\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Empid: %d\n", e[i].empid);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Bg: %s\n", e[i].bg);
    }

}

