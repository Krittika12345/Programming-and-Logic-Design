#include<stdio.h>
struct complex{
	int real;
	int imag;
};
int main()
{
	struct complex num1,num2,sum;
	printf("Enter the real and imaginary parts of the first complex number: ");
	scanf("%d %d",&num1.real,&num1.imag);
	printf("Enter the real and imaginary parts of the second complex number: ");
	scanf("%d %d",&num2.real,&num2.imag);
	
	sum.real=num1.real+num2.real;
	sum.imag=num1.imag+num2.imag;
	printf("Sum of two complex numbers: %d %d",sum.real,sum.imag);
	return 0;
}
