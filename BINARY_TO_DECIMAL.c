//BINARY TO DECIMAL CONVERSION

#include <stdio.h>

int main() 
{
    long long bin, orig;
    int dec = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    orig = bin;

    while (bin > 0) 
    {
        remainder = bin % 10;
        dec += remainder * base;
        bin /= 10;
        base *= 2;
    }

    printf("The decimal equivalent of %lld is: %d\n", orig, dec);

    return 0;
}
