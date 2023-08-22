//HCF AND LCM OF TWO NUMBERS

#include <stdio.h>

int main() 
{
    int a, x, i, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &x);

    // find HCF
    for(i=1; i<=a && i<=x; i++) 
    {
        if(a%i==0 && x%i==0) 
        {
            hcf = i;
        }
    }

    // find LCM
    lcm = (a*x)/hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
