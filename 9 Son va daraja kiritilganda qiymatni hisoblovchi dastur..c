#include <stdio.h>
int main()
{
  int son,daraja,qiymat;
  
  printf(" Sonni kiriting:   ");
  scanf("%d",&son);
  printf(" Darajani kiriting:");
  scanf("%d",&daraja);
  
  qiymat=pow(son,daraja);
  
  printf(" Qiymat :         %d",qiymat);
  
  
  return 0;
}
