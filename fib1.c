//FIBANOCCI WITHOUT RECURSSION

#include <stdio.h>

int main() 
{
    int num;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &num);
    int a = 0, b = 1;
    printf("Fibonacci series: %d, %d", a, b);
    for (int i = 2; i < num; i++) 
    {
        int next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
    }
    printf("\n");
}
