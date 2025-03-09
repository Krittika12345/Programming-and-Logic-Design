#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("ASCII values of the string:\n");
    for (i = 0; str[i] != '\0'; i++) 
	{
        printf("%c: %d\n", str[i], str[i]);
    }
    
    return 0;
}

