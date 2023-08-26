// DECIMAL TO OCTAL CONVERSION

#include <stdio.h>

int main() 
{
    int dec, orig, remainder, oct= 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    orig = dec;

    while (dec > 0) 
    {
        remainder = dec % 8;
        oct += remainder * place;
        dec /= 8;
        place *= 10;
    }

    printf("The octal equivalent of %d is: %d\n", orig, oct);

    return 0;
}
