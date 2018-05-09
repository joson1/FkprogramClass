#include <stdio.h>
// int main()
// {
//     char c2='d';
//     char str[]="student";
//     int i=333;
//     float x=222.456789;
//     float y=4.3;
//     printf("1:%c,%s,%d,%f,%e,%f\n",c2,str,i,x,x,y);
//     printf("2:%4c,%10s,%6d,%12f,%15e,%-10f\n",c2,str,i,x,x,y);
//     printf("3:%-4c,%-10s,%-6d,%-12f,%15e,%10f\n",c2,str,i,x,x,y);
//     printf("4:%0c,%6s,%3d,%9f,%10e,%2f\n",c2,str,i,x,x,y);
//     printf("5:%12.2f\n",x);
//     printf("6:%.2f\n",x);
//     printf("7:%10.4f\n",y);
//     printf("8:%5.3s,%8.1s\n",str,str);
//     printf("9:%%d: %d\n",i);
// 	system("pause");
}
#include<stdio.h> 
 main()
{
char c1,c2;
printf ("please input c1:\n");
scanf ("%c",&c1);
c2=c1+32;
printf ("c1=%c,c1=%d\n",c1,c1);
printf ("c2=%c,c2=%d\n",c2,c2);
}
