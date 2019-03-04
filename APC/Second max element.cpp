#include <stdio.h>
#include <limits.h>
/* Include other headers as needed */
int main()
{
  int a[5],max=INT_MIN,sec_max=INT_MIN;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  
  for(int i=0;i<5;i++)
  {
    if(a[i]>max)
    {
      sec_max=max;
      max=a[i];
    }
    else if(a[i]>sec_max && a[i] != max)
      sec_max=a[i];
  }
  if(sec_max==INT_MIN)
    printf("0");
  else
  printf("%d",sec_max);
    return 0;
}
