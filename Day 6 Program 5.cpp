#include<stdio.h>
main()
{
	int ar[8],key,i,found=0;
	printf("Enter the array numbers: ");
	for(i=0;i<8;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to search for: ");
	scanf("%d",&key);
	for(i=0;i<8;i++)
	{
		if(ar[i]==key)
		{
			printf("element %d found at index %d\n",key,i);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("Element %d not found",key);
	}
}
