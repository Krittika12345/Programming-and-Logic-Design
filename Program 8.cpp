#include<stdio.h>
main()
{
	int rows=4;
	int num=1;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows-i;j++)
		{
			printf("  ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}
}
