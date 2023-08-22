//LIST OUT EVEN AND ODD NUMBERS FROM A SET

#include<stdio.h>

int main()
{
    int a,e,o,j,i,l[100];
    printf("ENTER NUMBER OF ELEMENTS : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("ENTER ELEMENT : ");
        scanf("%d",&l[i]);
    }
    printf("\nEVEN NUMBER LIST\n");
    for(e=0;e<a;e++)
    {
        if(l[e]%2==0)
        {
            printf("%d  ",l[e]);
        }
    }
    printf("\nODD  NUMBER LIST \n");
    for(o=0;o<a;o++)
    {
        if(l[o]%2!=0)
        {
            printf("%d  ",l[o]);
        }
    }
}