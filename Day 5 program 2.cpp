#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("Enter the number: ");
	scanf("%d",&num);
	int original=num;
	if(num<0)
	{
		num=-num;
	}
	for(;num>0;num/=10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	if(original<0)
	{
		rev=-rev;
	}
	printf("Reverse number: %d\n",rev);
	return 0;
}
