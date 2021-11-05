#include <stdio.h>
int main()
{
  int bolinuvchi,boluvchi;
  printf(" Bolinuvchi va boluvchini kiriting:\n");
  scanf("%d%d",&bolinuvchi,&boluvchi);
  
  printf(" bolinma %d\n",bolinuvchi/boluvchi);
  printf(" Qoldiq  %d",bolinuvchi%boluvchi);
  
  return 0;
}
