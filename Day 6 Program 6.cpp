#include <stdio.h>

int main() 
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = 5; // Manually specifying the size of the array
    int key, left = 0, right = n - 1, mid;
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    while (left <= right) 
	{
        mid = left + (right - left) / 2;
  
        if (arr[mid] == key) 
		{
            printf("Element found at index %d\n", mid);
            return 0;
        }
        
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    printf("Element not found in array\n");
    return 0;
}

