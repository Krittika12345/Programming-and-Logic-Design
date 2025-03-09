#include <stdio.h>
#include <string.h>

int main() 
{
    char mainStr[100], subStr[100];
    
    printf("Enter the main string: ");
    scanf("%s", mainStr);
    
    printf("Enter the substring to search: ");
    scanf("%s", subStr);
    
    if (strstr(mainStr, subStr) != NULL) 
	{
        printf("The given string is a substring.\n");
    } else 
	{
        printf("The given string is not a substring.\n");
    }
    
    return 0;
}
