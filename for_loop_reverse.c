#include<stdio.h>

int main()
{
    int n, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(int i=0; i<=n; i++)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }
    printf("Reversed number = %d", reverse);
}