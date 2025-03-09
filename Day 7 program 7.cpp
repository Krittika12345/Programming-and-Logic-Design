#include <stdio.h>

// Recursive Binary Search function
int binarySearch(int arr[], int left, int right, int key) 
{
    if (left > right) 
	{
        return -1;
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key) 
	{
        return mid;
    }
    
    if (arr[mid] > key) 
	{
        return binarySearch(arr, left, mid - 1, key);
    }
    
    return binarySearch(arr, mid + 1, right, key);
}

int main() 
{
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    
    if (result != -1) 
	{
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}

