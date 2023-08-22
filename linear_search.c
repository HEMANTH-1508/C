//LINEAR SEARCH

#include <stdio.h>

int main() 
{
    int arr[100];
    int size, searchValue;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d", &searchValue);
    int found = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == searchValue) 
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found==0) 
    {
        printf("Element not found in the array.\n");
    }
}
