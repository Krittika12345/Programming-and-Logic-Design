#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("Factorial of %d is %d\n",n,f);
}
