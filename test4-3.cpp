#include<iostream>

using namespace std;

long fact(int n)
{
	long int f;
	if(n==1||n==0)
	{
		printf("in fact(%d):fact(%d)=1 now n=%d\n",n,n,n);
		return 1;
	}
	else {
		printf("in fact(%d):fact(%d)=%d*fact(%d) now n=%d\n",n,n,n-1,n);
		f=n*fact(n-1);
		printf("in fact(%d):fact(%d)=%d*fact(%d)=%ld now n=%d\n",n,n,n,n-1,f,n);
		
		return f;
	
	}

}

int main()
{
	int n;
	long int y;
	cout<<"please input an integer number: ";
	cin>>n;
	y=fact(n);
	printf("%d!= %ld\n",n,y);

return 0;
}
