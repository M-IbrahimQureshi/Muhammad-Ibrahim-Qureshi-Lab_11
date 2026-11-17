// Character Search System
#include <stdio.h>
#include <string.h>
int main(){
	char Sentence[20];
	char Ch;
	char Temp[20];
	printf("Enter Sentence: ");
	scanf("%s", &Sentence);
	printf("Enter Character: ");
	scanf(" %c", &Ch);
	char *result = strchr(Sentence,Ch);
	if(result== NULL)
		printf("Character is not Found \n");
	else
		printf("Found at index %d \n", result-Sentence+1);
	strcpy(Temp,Sentence);
	printf("%s", Temp);	
	
}
