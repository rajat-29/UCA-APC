#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a[5];
  for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
  int max=a[0];
  for(int i=0;i<5;i++)
  {
    if(a[i]>max)
      max=a[i];
  }
  printf("%d",max);
    return 0;
}