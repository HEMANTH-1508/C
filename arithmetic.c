#include<stdio.h>

int main()
{
  int X,N;
  float Add,Sub,Mul,Div,POW;
  printf("ENTER A NUMBER X\n");
  scanf("%d",&X);
  printf("ENTER A NUMBER N\n");
  scanf("%d",&N);

  Add=X+N;
  printf("ADDITION OF TWO NUMBERS IS %f\n",Add);

  Sub=X-N;
  printf("SUBRACTION OF TWO NUMBERS IS %f\n",Sub);

  Mul=X*N;
  printf("MULTIPLICATION OF TWO NUMBERS IS %f\n",Mul);

  Div=X/N;
  printf("DIVISION OF TWO NUMBERS IS %f\n",Div);

  POW=X^N;
  printf("X POWER OF N IS %f\n",POW);

  POW=X^N;
  printf("X POWER OF N IS %f\n",POW);
  
  return 0;
}