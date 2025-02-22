#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	int original=num;
	if(num<0)
	{
		printf("Not defined");
		return 0;
	}
	for(;num>0;num/=10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	if(original==rev)
	{
		printf("Palindrome Number");
	}
	else
	{
		printf("Not Palindrome number");
	}
	return 0;
}
