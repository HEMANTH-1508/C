#include<stdio.h>

int main()
{
    int j;
    int a[50],i;
    
    printf("ENTER TOTALL NUMBER OF NUMBERS :");
    scanf("%d",&i);
    
    for(j=1; j<=i; j++)
    {
        printf("ENTER THE NUMBER: ");
        scanf("%d",&a[j]);
    }
}