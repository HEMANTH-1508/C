// SUMMING UP AND ADDING

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = (float)sum / n;
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    printf("Average of first %d natural numbers = %.2f\n", n, avg);
    return 0;
}