#include <stdio.h>
int main(){
    long int f1=1,f2=2,f,i;
    printf("%10ld","%10ld",f1,f2);
    for(i=3;i<=20;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%10ld",f);
        if(i%4==0)
			printf("\n");
    }

    return 0;
}
