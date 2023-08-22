// TO PRINT SUM OF FIRST N NUMBERS

#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("ENTER LAST NUMBER : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=i;
        printf("%d\n",i);
    }
    printf("SUM OF FIRST N NUMBERS IS : %d",sum);
}