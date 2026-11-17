// Student Name Management USing 2D Array
#include <stdio.h>
#include <string.h>
int main(){
	const int N = 5;
	int i;
	char ch;
	char Names[N][20];
	char Temp[1][20];
	for(i=0;i<N;i++){
		printf("\nEnter Name of Student %d : ", i+1);
		scanf("%s", Names[i]);
	}
	for(i=0;i<N;i++){
		printf("Names[%d] = %s\n", i,Names[i]);
		printf("Length of Student %d = %d \n", i+1,strlen(Names[i]));
		
	}
	
	strcpy(Temp,Names[0]);
	printf("First Student Name is %s \n", Temp);
	
	// Searching of specific character in each Name:
	printf("Enter Character to Search in Each Name: \n");
	scanf(" %c", &ch);
	for(i=0; i<N; i++){
		char *ptr = strchr(Names[i],ch);
		if(ptr == NULL){
			printf("Character not Found in Student %d %s \n", i+1,Names[i]);
		}
		else{
			printf("Character Found at Index %d in %s \n", ptr-Names[i],Names[i]);
			printf("%d %d",ptr,Names[i]);
		}
	}
	
		
}
