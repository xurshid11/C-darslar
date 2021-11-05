#include <stdio.h>
int main()
{
   int a,b;
   printf(" Ikkita qiymat kiriting.\n");
   scanf("%d%d",&a,&b);
   
   printf(" Arifmetik qo'shish:      %d+%d=%d\n",a,b,a+b);
   printf(" Arifmetik ayirish:       %d-%d=%d\n",a,b,a-b);
   printf(" Arifmetik ko'paytirish:  %d*%d=%d\n",a,b,a*b);
   printf(" Arifmetik bo'lish:       %d/%d=%d",a,b,a/b);
   
   return 0;
}
