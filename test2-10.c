#include "stdio.h" 
int main() {
    int n,i,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//for循环求累积 
        s=s*i;
    printf("%d\n",s);
    return 0;
}
