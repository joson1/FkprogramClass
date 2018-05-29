#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[11] = {1,4,6,9,13,16,19,28,40,100};
    int number,i,j;
    printf("The dimension is:\n");
    for(i=0;i<10;i++){
        printf("%5d",a[1]);
    }
    printf("\n");
    printf("Please input the inserted number: ");
    scanf("%d",&number);
    if(number>a[9]){
        a[10] = number;
    }else{
        for(i=0;i<10;i++){
            if(number<a[i]){
                for(j=10;j>i;j--){
                    a[j]=a[j-1];
                    a[i]=number;
                    break;
                }
            }
        }
        for(i=0;i<11;i++){
            printf("%5d",a[i]);
        }
    }
    return 0;
}
