// TO PRINT SUM OF SQUARES OF FIRST N NUMBERS

#include<stdio.h>
# include<math.h>

int main()
{
    int a,i,sum=0;
    printf("ENTER LAST NUMBER : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=pow(i,2);
    }
    printf("SUM OF FIRST N NUMBERS IS : %d",sum);
}
