#include<stdio.h>
int main()
{
  int a,b=1;

  printf("enter a number a :");
  scanf("%d",&a);
  int i;
  for(i=1;i<=a;i++)
  {
    b=b*i;
  }
  printf("\nFactorial of %d is: %d ",a,b);
}