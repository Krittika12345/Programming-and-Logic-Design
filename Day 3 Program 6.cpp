#include<stdio.h>
main()
{
	int n,s,a=0,b=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a);
		s=a+b;
		a=b;
		b=s;
	}
}
