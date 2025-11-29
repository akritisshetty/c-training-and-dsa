#include<stdio.h>
#include<string.h>
int main(void) {
	char a[100], b[100];
	int choice;
	printf("Enter first name: ");
	scanf("%s", &a);
	printf("\nEnter second name: ");
	scanf("%s", &b);
	while(1) {
		printf("\n1. Length of first name\n2. Length of second name\n3. Concatenation\n4. Compare \n5. Copy\n6. Exit\nEnter your choice: ");
		scanf("%d", &choice);
			case 1: printf("%ld\n", strlen(a));
				break;
			case 2: printf("%ld\n", strlen(b));
				break;
			case 3: printf("%s\n", strcat(a, b));
				break;
			case 4: printf("%d\n", strcmp(a, b));
				break;
			case 5: printf("%s\n", strcpy(a, b));
				break;
			case 6: return 0;
			default: printf("\nInvalid choice");
		}
	}
	
}
