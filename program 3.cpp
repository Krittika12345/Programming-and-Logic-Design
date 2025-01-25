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
		s=s*10+r;
		num=num/10;
	}
	if(p==s)
	{
	    printf("Pallindrom Number");	
	}
	else
	{
		printf("Not Pallindrom Number");
	}
	
}
