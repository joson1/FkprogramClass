#include <stdio.h> 
#include <stdlib.h>
int cow(int n) {
	int i,j, sum = 0;
	int one_new = 1;
	int a[4] = {1,0,0,0};
	for(i=1; i<n; i++) {
		sum = 0;
		one_new = a[3] + a[2]; 
		a[3] += a[2];
		a[2] = a[1];
		a[1] = a[0];		
		a[0] = one_new;
		for(j=0; j<4; j++) sum += a[j];
		printf("n=%d，cow=%d\n",i + 1,sum);
	}
	return sum;
}
int main(void)
{
	cow(10);
	getchar();
	getchar();
}
