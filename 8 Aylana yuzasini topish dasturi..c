#include <stdio.h>
int main()
{
   float radius;
   printf(" Aylana radiusini kiriting:");
   scanf("%f",&radius);
   printf(" \n");

   printf(" Aylana diametri %.2f\n",radius*2);
   printf(" Aylana uzunligi %.2f\n",2*3.14*radius);
   printf(" Aylana yuzi     %.2f",3.14*radius*radius);
   
    return 0;
   
}
