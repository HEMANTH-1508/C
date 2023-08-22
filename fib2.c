//FIBONACCI USING RECURSION

#include <stdio.h>

void fib(int n) 
{
    int a = 0, b = 1;
    printf("Fibonacci series: %d, %d", a, b);
    for (int i = 2; i <= n; i++) 
    {
        int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() 
{
    int num;
    printf("Enter the value of n for the nth Fibonacci number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } 
    else 
    {
        fib(num);
    }
}
