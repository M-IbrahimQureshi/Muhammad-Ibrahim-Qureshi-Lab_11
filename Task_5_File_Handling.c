#include <stdio.h>
#include <string.h>
int main(){
	int Obt_Marks, T_Marks=0;
	char Name[10];
	printf("Enter Student Name, Obtained Marks, Total Marks: \n");
	scanf("%s %d %d", &Name,&Obt_Marks,&T_Marks);
	float Per = (Obt_Marks/(float)T_Marks)*100;
	
	FILE *fpr;
	fpr = fopen("student.txt","w");
	fprintf(fpr,"Name: %s\nObtained Marks: %d\nTotal Marks: %d\nPercentage: %.2f\n",Name,Obt_Marks,T_Marks,Per);
	fclose(fpr);
	
	fpr = fopen("student.txt","r");
	fscanf(fpr," %s %d %d %f", Name,&Obt_Marks,&T_Marks,&Per);
	printf("%s\n%d\n%d\n%.2f\n", Name,Obt_Marks,T_Marks,Per);
	fclose(fpr);
	
	return 0;
}
