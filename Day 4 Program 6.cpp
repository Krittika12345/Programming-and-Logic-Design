#include <stdio.h>

// Function to swap using call by value
void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function to swap using call by reference
void swapByReference(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int num1, num2;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping:\nnum1 = %d, num2 = %d\n", num1, num2);

    // Call by value
    swapByValue(num1, num2);
    printf("After swapByValue (in main): num1 = %d, num2 = %d\n", num1, num2);

    // Call by reference
    swapByReference(&num1, &num2);
    printf("After swapByReference (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

