#include<stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int peach = 0;//桃子总数  
    int rest = 1;//第10 天只剩一个桃子  
    int day = 0;  
    for(day = 9; day > 0; day--)  
    {  
        peach = (rest + 1) * 2;//每天的桃子总数是后一天剩余桃子加1乘2  
        rest = peach;  
    }  
    printf("猴子第一天一共摘了%d个桃子\n",peach);  
    system("pause");  
    return 0;  
}
