#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next, count = 0;
    
    // Input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    while (count < n) 
	{
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        count++;
    }
    
    printf("\n");
    return 0;
}

