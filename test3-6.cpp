#include<iostream> 
#include<string.h>
int main()
{
	char string[20];
	char str[5][20];
	int i;
	printf("please enter the strings:\n");
	for(i=0;i<5;i++){
		gets(str[i]);
	}
	strcpy(string,str[0]);
	for(i=1;i<5;i++){
		if(strcmp(str[i],string)>0){
			strcpy(string,str[i]);
		}
	}
	printf("\nthe largest string is:\n");
	puts(string);
}
