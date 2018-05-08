#include <stdio.h>
int main(){
    int magic;
    int guess;
    int count = 0;
    magic=rand()%100+1;
    do{
        printf("Please guess a magic number:");
        scanf("%d",&guess);
        count++;
        if(guess>magic)
            printf("Wrong!Too high\n");
        else if(guess<magic)
            printf("Wrong!Too low!\n");
    }while(guess!=magic);
    printf("Right!\n");
    printf("counter=%d\n",count);

    return 0;
}
