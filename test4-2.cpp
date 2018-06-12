#include<iostream>

using namespace std;


int power(int x,int n)
{
	int p;
	for(p=1;n>0;--n)
	{
		p*=x;
	
	}
	return p;

}

int main()
{
	int i;
	for(i=1;i<10;i++)
	{
		printf("i=%d:%d,%d:\n",i,power(2,1),power(-3,i));

	}



return 0;
}
