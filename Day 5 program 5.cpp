#include<stdio.h>
int main()
{
	int num,factorial=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	int i=num;
	while(i>1)
	{
		factorial*=i;
		i--;
	}
	printf("factorial of %d is %d\n",num,factorial);
	return 0;
}
