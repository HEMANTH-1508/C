//DECIMAL TO BINARY CONVERSION

#include <stdio.h>

int main() {
    int dec, orig, remainder, bin = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    orig = dec;

    while (dec > 0) 
    {
        remainder = dec % 2;
        bin += remainder * place;
        dec /= 2;
        place *= 10;
    }

    printf("The binary equivalent of %d is: %d\n", orig, bin);
    return 0;
}
