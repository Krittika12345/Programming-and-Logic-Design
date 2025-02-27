#include<stdio.h>
struct details{
	char name[30];
	int ISBN_NO;
	float price;
};
int main()
{
	struct details b[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter the name of the Author: ");
		scanf("%s",b[i].name);
		printf("Enter the ISBN No: ");
		scanf("%d",&b[i].ISBN_NO);
		printf("Enter the price: ");
		scanf("%f",&b[i].price);
	}
	printf("Details of the book\n");
	for( int i=0;i<5;i++)
	{
		printf("Name of the Author: %s\n",b[i].name);
		printf("ISBN No: %d\n",b[i].ISBN_NO);
		printf("Price: %f\n",b[i].price);
	}
	return 0;
}
