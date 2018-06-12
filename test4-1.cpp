#include<iostream>

using namespace std;




int f1(int a, int b)
{
	int t,r;
	if(b>a){t=a;a=b;b=t;}
	r=a%b;
	while(r!=0)
	{
	
	a=b;
	b=r;
	r=a%b;
	
	
	}
	return b;


}

int f2(int a, int b)
{
	int i;
	for(i=1;i<=b;i++)
	{
		if(i*a%b==0)
			return i*a;
	
	
	}


}

int main()
{
	int a,b,x,y;
	cout<<"please enter two positive integer numbers: \n";
	cin>>a>>b;
	x=f1(a,b);
	cout<<"The greatest common factor is: "<<x<<endl;
	y=f2(a,b);
	cout<<"The lease common mutiple is : "<<y<<endl;





return 0;
}
