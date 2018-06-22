#include "stdio.h"
void Input_Max_Min(int *p,int *pl,int *ps){
    int i;
    printf("Please enter the 10 Numbers...\n");
    for(*pl=*ps=i=0;i<10;i++){
        scanf("%d",p+i);
        if(p[i]<p[*ps])
            *ps=i;
        if(p[i]>p[*pl])
            *pl=i;
    }
} 
int main(int argc,char *argv[]){
    int m[10],ml,ms;
    Input_Max_Min(m,&ml,&ms);
    printf("The MAX is m[%d]==%d\nThe MIN is m[%d]==%d\n",ml,m[ml],ms,m[ms]);
    return 0;
}
