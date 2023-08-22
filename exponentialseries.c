//EXPONENTIAL SERIES 

#include<stdio.h>
#include<math.h>
void main()
{
 int x,i,n;
 float s=0;
 printf("enter the value of x :");
 scanf("%d",&x);
 printf("enter the value of n :");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
   s+=pow(x,i)/fact(i);	
 }
 printf("%f",s+1);
}
int fact(int k)
{
	int f=1,i;
	for(i=1;i<=k;i++)
	{
		f*=i;
	}
	return f;
}
