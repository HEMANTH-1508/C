// SUM OF POWER OF NUMBER SERIES

#include<stdio.h>
#include<math.h>

int main()
{
    int a,i,sum=0;
    printf("ENTER LAST DIGIT : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=pow(i,i);
        //printf("%d\n",i);
    }
    printf("SUM OF POWER OF NUMBER SERIES : %d",sum);
}
