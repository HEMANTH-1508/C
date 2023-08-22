// EVEN NUMBER SERIES

#include<stdio.h>
int main()
{
    int a,i;
    printf("ENTER LAST DIGIT : ");
    scanf("%d",&a);
    for(i=2;i<=a;i+=2)
    {
        printf("%d\n",i);
    }
}