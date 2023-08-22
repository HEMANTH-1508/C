#include <stdio.h>
int main()
{
    int n, i=1, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum =sum + i;
        i++;
    }
    if(n<0)
    {
        printf("ENTER number greater than 0\n");
    }
    else
    {
        printf("Sum = %d", sum);
    }
    
    return 0;
}