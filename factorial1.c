// FACTORIAL OF GIVEN NUMBER

#include<stdio.h>

int main()
{
    int a,i,f=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    for( i=1; i<=a;i++)
    {
        f=f*i;
    }
    printf("FACTORIAL OF GIVEN NUMBER IS %d",f);
}