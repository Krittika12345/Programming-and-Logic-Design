#include<stdio.h>
main()
{
	int ar[8];
	int max,min;
	printf("Enter the 8 elements in the array: ");
	for(int i=0;i<8;i++)
	{
		scanf("%d",&ar[i]);
	}
	max=ar[0];
	min=ar[0];
	for(int i=0;i<8;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
		}
		if(ar[i]<min)
		{
			min=ar[i];
		}
	}
	printf("Maximum value: %d\n",max);
	printf("Minimum Value: %d\n",min);
	return 0;
}
