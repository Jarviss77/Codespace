#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char input[16];
	char checking_you_out[16]= "aaaaaaaaaaaaaaaa";
	// char input[17];
	printf("Enter the password : \n");
	scanf("%s",input);
	printf("%s\n", input);
	printf("%s", checking_you_out);
	if(!(strcmp(checking_you_out,"\xdev\xa0m"))){

		FILE * fptr=fopen("./flag.txt","r");
		char flag[50];
		fgets(flag,40,fptr);
		printf("HERE'S your flag: %s\n\n",flag);
		
	}

	else{

		printf("\nHOW YOU DOIN' NOOOOB?\n\n");
	
	}

	return 0;

}
