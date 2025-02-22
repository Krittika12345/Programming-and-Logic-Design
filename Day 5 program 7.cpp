#include<stdio.h>
int main()
{
	int ar[5]={10,20,30,40,50};
	int *p=ar;
	printf("Array elements using pointers:\n");
	for(int i=0;i<5;i++)
	{
		printf("Element at index %d is: %d\n",i,*(p+i));
	}
	return 0;
}
