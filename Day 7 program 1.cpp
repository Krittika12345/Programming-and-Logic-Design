#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int left, right, Palindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    left = 0;
    right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) 
        {
            Palindrome = 0; // Not a palindrome
            break;
        }
        left++;
        right--;
    }
    
    if (Palindrome) 
    {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}

