#include<iostream> 
int main()
{
	int i=0,s;
	char str1[41],str2[41];
	printf("Enter string1:");
	gets(str1);
	printf("Enter string2:");
	gets(str2);
	while(str1[1]==str2[i]&&(str1[i]!='\0'||str2[i]!='\0'))
		i++;
	s=str1[i]-str2[i];
	printf("s=%d\n",s);		
}
