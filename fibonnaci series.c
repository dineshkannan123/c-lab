#include<stdio.h>
int fibonnaci (int n)
{
	if (n==1||n==2)
	{
		return 1;
	}
	return fibonnaci(n-1)+fibonnaci(n-2);
}
int main()
{
	int n,i=1;
	int fib;
	printf("enter the upper limit n:");
	scanf("%d",&n);
	printf("fibonnaci serier up to %d:\n",n);
	while (1)
	{
		fib=fibonnaci (i);
		if(fib>n)
		{
			break;
		}
		printf("%d",fib);
	}
	printf("\n");
	return 0;
}
