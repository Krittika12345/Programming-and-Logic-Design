#include<stdio.h>
main()
{
	int num,r,s=0,p;
	printf("Enter any number: ");
	scanf("%d",&num);
	p=num;
	while(num>0)
	{
		r=num%10;
		s=s+(r*r*r);
		num=num/10;
	}
	if(p==s)
	{
	    printf("Armstrong Number");	
	}
	else
	{
		printf("Not Armstrong Number");
	}
	
}
