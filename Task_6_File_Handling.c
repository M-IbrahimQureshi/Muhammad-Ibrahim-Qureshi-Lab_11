// Bank Transaction Record --> w, a and r
#include <stdio.h>

int main(){
	int AccNum, T_Amount ;
	printf("Enter Customer Account Number: ");
	scanf("%d", &AccNum);
	printf("Enter First Transaction Amount: ");
	scanf("%d", &T_Amount);
	
	FILE *ptr;
	ptr = fopen("bank.txt","w");
	fprintf(ptr,"%d\n%d\n",AccNum,T_Amount);
	fclose(ptr);
	
	ptr = fopen("bank.txt","a");
	printf("Enter Another transaction: ");
	scanf("%d", &T_Amount);
	fprintf(ptr,"%d\n",T_Amount);
	fclose(ptr);
	
	ptr = fopen("bank.txt","r");
	int read_AccNum,T1,T2;
	fscanf(ptr,"%d\n%d\n%d",&read_AccNum,&T1,&T2);
	fclose(ptr);
	printf("\n== Retrieved Data ==\n");
	printf("Account Number : %d\n", read_AccNum);
	printf("First Transaction : %d\n",  T1);
	printf("Second Transaction : %d\n",  T2);
	return 0;
	
}
