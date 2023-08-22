#include <stdio.h>
#include <string.h>

int main()
{
   char str[] = "Hello world";
   printf("The string is : %s\n", str); 
   strrev(str); 
   printf("Reversed string is : %s\n", str); 
}
