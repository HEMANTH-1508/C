// SUM OF SQUARES OF EVEN NUMBER SERIES

#include<stdio.h>
#include<math.h>

int main()
{
    int a,i,sum=0;
    printf("ENTER LAST DIGIT : ");
    scanf("%d",&a);
    for(i=2;i<=a;i+=2)
    {
        sum+=pow(i,2);
    }
    printf("SUM OF EVEN NUMBER SERIES : %d",sum);
}
