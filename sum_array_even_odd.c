// SUM OF EVEN AND ODD NUMBERS IN A ARRAY

#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) 
    {
        printf("enter element : ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        if(arr[i] % 2 == 0) 
        {
            even += arr[i];
        }
        else 
        {
            odd += arr[i];
        }
    }
    if(even > odd) 
    {
        printf("Sum of even numbers is larger: %d", even);
    }
    else 
    {
        printf("Sum of odd numbers is larger: %d", odd);
    }
    return 0;
}
