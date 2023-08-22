// SUM OF ODD NUMBER SERIES

#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("ENTER LAST DIGIT : ");
    scanf("%d",&a);
    for(i=1;i<=a;i+=2)
    {
        sum+=i;
        printf("%d\n",i);
    }
    printf("SUM OF ODD NUMBER SERIES : %d",sum);
}