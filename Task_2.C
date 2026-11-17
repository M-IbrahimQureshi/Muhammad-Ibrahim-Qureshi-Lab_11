// Product Comparision System
#include <stdio.h>
#include <string.h>
int main(){
	char Pro1[20];
	char Pro2[20];
	printf("Enter Product Name: ");
	scanf("%s", &Pro1);
	printf("Enter Product Name: ");
	scanf("%s", &Pro2);
	if(strcmp(Pro1,Pro2) == 0)
		printf("Both products are Identical\n");
	else
		printf("Both products are Different\n");
	printf("Length of Product 1 = %d \n", strlen(Pro1));
	printf("Length of Product 2 = %d \n", strlen(Pro2));
}
