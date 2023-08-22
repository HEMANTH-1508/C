//exponential 

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,x,n,fact;
    float sum=0.0;
    printf("Enter the number n : ");
    scanf("%d",&n);
    printf("Enter the number x : ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact *=j;
        }
        sum +=pow(x,i)/fact;
    }
    printf("%f",sum+1);
}