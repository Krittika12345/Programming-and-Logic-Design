#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, whitespace = 0, numbers = 0, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]);
        
        if (ch >= 'a' && ch <= 'z') 
		{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                vowels++;
            } else 
			{
                consonants++;
            }
        } 
		else if (ch >= '0' && ch <= '9') 
		{
            numbers++;
        } else if (isspace(ch)) 
		{
            whitespace++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Whitespace: %d\n", whitespace);
    printf("Numbers: %d\n", numbers);
    
    return 0;
}

