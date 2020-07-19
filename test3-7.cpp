#include "stdio.h"
int main(void){
    char ch;
    int Dec[10]={0},letter=0,other=0,i=0;
    while(1){
        if((ch=getchar())>='0' && ch<='9')
            Dec[ch-'0']++;
        else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
            letter++;
        else if(ch=='\n')
            break;
        else other++;
    }
    for(i=0;i<10;printf("Number%d: %d\n",i,Dec[i++]));
    printf("Characters: %d\n",letter);
    printf("Other: %d\n",other+1);
    return 0;
}
