#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j,a[11][11];
    for(i=1;i<11;i++)
        for(j=1;j<=i;j++)
            if(i==j||j==1)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0;i<11;i++){
        for(j=1;j<=i;j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }            
    return 0;
}
