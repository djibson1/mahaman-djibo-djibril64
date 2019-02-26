#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int a=500;
	int b=250;
	int c=200;
	int d=100;
	int e=50;
	int f=10;
	int j=5;
	int k=1;

int	n = get_int("type amount : ");

	int counter = 0;

	while (n>=a)
	{
		counter++;
		n=n-a;
	}
	while (n>=b)
	{
		counter++;
		n=n-b;
	}
	while (n>=c)
	{
		counter++;
		n=n-c;
	}
	while (n>=d)
	{
		counter++;
		n=n-d;
	}
	while (n>=e)
	{
		counter++;
		n=n-e;
	}
	while (n>=f)
	{
		counter++;
		n=n-f;
	}
	while (n>=j)
	{
		counter++;
		n=n-j;
	}
	while (n>=k)
	{
		counter++;
		n=n-k;
	}
	printf("max coins is %i\n",counter);
}