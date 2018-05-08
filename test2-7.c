#include <stdio.h>
int main(){
    int x=0,i;
    while(1){
        for(i=1;i<10;i++){
            x=(x/2)-1;
        }
        
		if(x==1){
			break;
		}
        x++;
    }
    printf("X=%d\n",x);
    return 0;
}
