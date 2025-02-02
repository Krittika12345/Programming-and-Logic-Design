#include<stdio.h>
int fibonacci(int n);
int main()
{
	int num;
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	printf("Fibonacci Series: %d terms\n",num);
	fibonacci(num);
	return 0;
}
int fibonacci(int n)
{
	int a=0,b=1,next;
	if(n<=0)
	{
		return 0;
	}
	printf("%d ",a);
	if(n>1)
	{
		printf("%d ",b);
	}
	for(int i=3;i<=n;i++)
	{
		next=a+b;
		printf("%d ",next);
		a=b;
		b=next;
	}
	printf("\n");
}
