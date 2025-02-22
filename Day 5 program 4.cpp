#include<stdio.h>
#include<math.h>
int main()
{
	int num,p,n=0,r,s=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	int original=num;
	for(int p=num;p!=0; p/=10,n++);
	for(int p=num;p!=0;p/=10)
	{
		r=p%10;
		s+=pow(r,n);
	}
	if(s==original)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
	return 0;
}
