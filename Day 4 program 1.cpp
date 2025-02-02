#include<stdio.h>
int fact (int n);
int main()
{
	int num;
	printf("Enter any positive integer: ");
	scanf("%d",&num);
	printf("Fcatorial of %d is %d\n",num,fact(num));
	return 0;
}
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
