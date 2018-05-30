#include <stdio.h> 
#include <stdlib.h>

int MyStrcmp(char s[], char t[])
{
    int i;
    for (i=0; s[i] == t[i]; i++ )
    {
        if(s[i] == '\0') return 0 ;
    }
    return (s[i] - t[i]);
}

int main(void)
{
	char s[] = "hello";
	char t[] = "hell";
	int d;
	d=MyStrcmp(s,t);
	printf("%d\n",d);
}
