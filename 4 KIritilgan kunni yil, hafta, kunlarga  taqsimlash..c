#include <stdio.h>
int main()
{
   int kun;
  
      
   printf(" Kunlar miqdori:");
   scanf("%d",&kun);
   
   printf(" %d yil\n",kun/365);
   printf(" %d hafta\n",kun%365/7);
   printf(" %d kun",kun%365%7);

   return 0;
}
