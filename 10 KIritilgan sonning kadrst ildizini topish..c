#include <stdio.h>
int main()
{
   int kvadrat,ildiz;
   
   printf(" Sonning kvadratini kiriting:");
   scanf(" %d",&kvadrat);
   
   ildiz=sqrt(kvadrat);
   
   printf(" Sonning kvadrat ildizi %d ga teng.",ildiz);
   
   return 0;
   
}
