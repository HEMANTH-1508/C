//SINSERIES

#include<stdio.h>
#include<math.h>
void main()
{
 int x,i,si,n;
 float s=0;
 printf("enter the x value of sin(x) :");
 scanf("%d",&x);
 printf("enter the value of n :");
 scanf("%d",&n);
 si =1;
 for(i=1;i<=n;i+=2)
 {
   s+=pow(x,i)/fact(i)*si;
   si=-si;	 
 }
 printf("%f",s);
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