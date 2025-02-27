#include<stdio.h>
struct distance {
	int feet;
	int inches;
};
int main()
{
	struct distance d1,d2,d3;
	printf("Enter the first distance: ");
	printf("Feet: ");
	scanf("%d",&d1.feet);
	printf("Inches: ");
	scanf("%d",&d1.inches);
	
	printf("Enter the second distance: ");
	printf("Feet: ");
	scanf("%d",&d2.feet);
	printf("Inches: ");
	scanf("%d",&d2.inches);
	
	d3.inches=d1.inches+d2.inches;
	d3.feet=d1.feet+d2.feet;
	if(d3.inches>=12)
	{
		d3.feet+=d3.inches/12;
		d3.inches=d3.inches%12;
	}
	printf("Total Distance: %d feet %d inches",d3.feet,d3.inches);
	return 0;
	
	
}
