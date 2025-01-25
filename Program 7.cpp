#include<stdio.h>
main()
{
	int n,prime=1,i;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n<=1)
	{
		prime=0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				prime=0;
				break;
			}
		}
	}
	if(prime)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not prime number");
	}
}
