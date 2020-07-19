#include<iostream> 
int main()
{
	int c, i;
	double n, p;
	for (c = 6; c <= 12; c += 2)
	{
		n = 100.0;
		p = 1.0 + c/100.0;
		i = 0;
		do
		{
			n *= p;
			i++;
		} while (n < 200.0);
		printf("%d\n", i);
	}
	return 0;		
}
